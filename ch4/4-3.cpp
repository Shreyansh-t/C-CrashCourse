#include <cstdio>
#include <sys/time.h>

struct TimerClass{
    struct timeval currentTime;
    TimerClass(){
        gettimeofday(&currentTime, NULL);
        timestamp = currentTime.tv_usec;
    }

    TimerClass(const TimerClass &other){
        timestamp = other.timestamp;
    }

    ~TimerClass(){
        gettimeofday(&currentTime, NULL);
        auto endTime = currentTime.tv_usec;
        auto finalTime = endTime - timestamp;
        printf("Time: %ld\n", finalTime);
    }

    private:
        long timestamp;
};

int main(){
    
}
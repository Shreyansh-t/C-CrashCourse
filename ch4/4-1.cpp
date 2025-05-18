#include <cstdio>
#include <sys/time.h>

struct TimerClass{
    struct timeval currentTime;
    TimerClass(){
        gettimeofday(&currentTime, NULL);
        timestamp = currentTime.tv_sec;
    }

    ~TimerClass(){
        gettimeofday(&currentTime, NULL);
        auto endTime = currentTime.tv_sec;
        auto finalTime = endTime - timestamp;
        printf("Time: %ld\n", finalTime);
    }

    private:
        long timestamp;
};

int main(){
    
}
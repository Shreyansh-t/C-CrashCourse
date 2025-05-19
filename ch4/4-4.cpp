#include <cstdio>
#include <sys/time.h>
#include <cstring>
#include <utility>

struct TimerClass{
    struct timeval currentTime;

    TimerClass(const char* input_name): name {} {
        gettimeofday(&currentTime, NULL);
        timestamp = currentTime.tv_usec;
        name = new char[100];
        std::strncpy(name, input_name, 100);
    }

    TimerClass(const TimerClass &other){
        timestamp = other.timestamp;
        name = new char[100];
        std::strncpy(name, other.name, 100);
    }

    TimerClass(TimerClass&& other) noexcept{
        timestamp = other.timestamp;
        name = other.name;
        other.name = NULL;
    }

    ~TimerClass(){
        gettimeofday(&currentTime, NULL);
        auto endTime = currentTime.tv_usec;
        auto finalTime = endTime - timestamp;
        if(name!=NULL){
            delete[] name;
            printf("Time: %ld\n", finalTime);
        }
    }

    private:
        long timestamp;
        char* name;
};

int main(){
    TimerClass t1("first timer");
    int count = 0;
    for(int i =0; i < 10000; i++){
        count++;
    }
    TimerClass t2{std::move(t1)};
}
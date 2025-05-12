#include <cstdio>

int absolute_value(int x){
    if(x >= 0){
        return x;
    }
    else{
        return x*(-1);
    }
}

int main(){
    int my_num = -20;
    printf("The absolute of %d is %d.\n", my_num, absolute_value(my_num));
}
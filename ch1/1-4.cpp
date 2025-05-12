#include <cstdio>

int sum(int x, int y){
    return x+y;
}

int main(){
    int x = 5, y =10;
    printf("The sume %d and %d is %d:\n", x, y, sum(x, y));
}
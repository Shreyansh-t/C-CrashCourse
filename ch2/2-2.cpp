#include <cstdio>

enum class Operation{
    Add,
    Subtract,
    Multiply,
    Divide
};

struct Calculator{

    Operation op;

    Calculator(Operation operation){
        op = operation;
    }
};

int main(){
    return 0;
}
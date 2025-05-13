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

    int calculate(int a, int b){
        int ans{};
        switch(op){
            case Operation::Add:{
                ans = a+b;
            } break;
            case Operation::Subtract:{
                ans = a-b;
            }break;
            case Operation::Multiply:{
                ans = a*b;
            }break;
            case Operation::Divide:{
                ans = a/b;
            }break;
        }
        return ans;
    }
};

int main(){

    Operation op = Operation::Multiply;
    
    Calculator calc{op};
    int ans = calc.calculate(5, 10);

    printf("Ans: %d\n", ans);

    return 0;
}
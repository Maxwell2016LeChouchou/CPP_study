#include <iostream>
using namespace std;

// 3.1 函数默认参数
int func(int a, int b=1, int c=2)
{
    return a + b + c;
}

int func2(int a = 1, int b = 2);
int func2(int a, int b){
    return a + b;
}

int main()
{
    cout << "func(20,20)" << func(20, 20) << endl; // 42
    cout << "func(100)" << func(100) << endl;      // 103
    cout << "func2(20,20)" << func2(20, 20) << endl;  // 40
    cout << "func2(100)" << func2(100) << endl;     // 102
    return 0;
}
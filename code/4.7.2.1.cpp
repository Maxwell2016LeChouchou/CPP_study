// #### 4.7.2 多态案例一-计算器类


// 案例描述：

// 分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类


// 多态的优点：

// * 代码组织结构清晰
// * 可读性强
// * 利于前期和后期的扩展以及维护

#include <iostream>
using namespace std;


// 写一个计算器
// 普通实现

class Calculator
{

public:
    int getResult(string opera)
    {
        if(opera == "+")
        {
            return num1 + num2;
        }
        if (opera == "-")
        {
            return num1 - num2;
        }
        if(opera == "*")
        {
            return num1 * num2;
        }
    }
    int num1;
    int num2;
};

void test()
{
    Calculator c;
    c.num1 = 5;
    c.num2 = 2;
    int add = c.getResult("+");
    int subtract = c.getResult("-");
    int multiply = c.getResult("*");
    cout << c.num1 << "+" << c.num2 << "=" <<add <<endl; 
    cout << c.num1 << "-" << c.num2 << "=" <<subtract <<endl; 
    cout << c.num1 << "*" << c.num2 << "=" <<multiply <<endl; 
}

int main()
{
    test();
    return 0;
}
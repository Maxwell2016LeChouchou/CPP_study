// #### 1.2.1 函数模板语法

// 函数模板作用：

// 建立一个通用函数，其函数返回值类型和形参类型可以不具体制定，用一个**虚拟的类型**来代表。


// **语法：** 

// ```C++
// template<typename T>
// 函数声明或定义
// ```

// **解释：**

// template  ---  声明创建模板

// typename  --- 表面其后面的符号是一种数据类型，可以用class代替

// T    ---   通用的数据类型，名称可以替换，通常为大写字母

#include <iostream>
using namespace std;

void swapInt(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapDouble(double& a, double& b)
{
    double temp = a;
    a = b;
    b = temp;
}

template<typename T>
void mySwap(T& a, T& b) // 模板的好处即时通用性，不用考虑数据类型
{
    T temp = a;
    a = b;
    b = temp;
}

void test()
{
    int a = 10;
    int b = 20;

    // swapInt(a, b);

    mySwap<int>(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

}

int main()
{
    test();
    return 0;
}


// 总结：

// * 函数模板利用关键字 template
// * 使用函数模板有两种方式：自动类型推导、显示指定类型
// * 模板的目的是为了提高复用性，将类型参数化


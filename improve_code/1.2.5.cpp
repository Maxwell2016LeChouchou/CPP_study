// #### 1.2.5 普通函数与函数模板的调用规则

// 调用规则如下：

// 1. 如果函数模板和普通函数都可以实现，优先调用普通函数
// 2. 可以通过空模板参数列表来强制调用函数模板
// 3. 函数模板也可以发生重载
// 4. 如果函数模板可以产生更好的匹配,优先调用函数模板

#include <iostream>
using namespace std;

void myPrint(int a, int b)
{
    cout << "call regular function" << endl;
}

template <typename T>
void myPrint(T a, T b)
{
    cout << "call regular template" << endl;
}

template <typename T>
void myPrint(T a, T b, T c)
{
    cout << "call overloaded template" << endl;
}

void test01()
{
    // 1. 如果函数模板和普通函数都可以实现，优先调用普通函数
    // 注意 如果告诉编译器 普通函数是有的，但只是声明没有实现，或者不在当前文件内实现，就会报错找不到
    int a = 10;
    int b = 20;
    myPrint(a, b); // 调用普通函数

    // 2. 可以通过空模板参数列表来强制调用函数模板
    myPrint<>(a, b);

    // 3. 函数模板也可以发生重载
    int c = 30;
    myPrint(a, b, c);

    // 4. 如果函数模板可以产生更好的匹配，优先调用函数模板
    char c1 = 'a';
    char c2 = 'b';
    myPrint(c1, c2);
}

int main()
{
    test01();
    return 0;
}
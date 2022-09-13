// #### 4.5.6 函数调用运算符重载

// * 函数调用运算符 ()  也可以重载
// * 由于重载后使用的方式非常像函数的调用，因此称为仿函数
// * 仿函数没有固定写法，非常灵活

#include <iostream>
using namespace std;

class MyPrint
{
public:
    void operator()(string text)
    {
        cout << text << endl;
    }

};

class MyAdd
{
public:
    int operator()(int a, int b)
    {
        return a + b;
    }
};

void test01()
{
    MyPrint mp;
    mp("lalala");
}

void test02()
{
    MyAdd ma;
    int c = ma(7, 9);
    cout << "c " << c << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}

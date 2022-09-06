// **示例2：**静态成员函数

#include <iostream>
using namespace std;

class Person
{
public:

    static void func1()
    {
        cout << "func1 调用 " << endl;
        m_A = 100;
        // m_B  //错误，不可以访问非静态成员变量 
    }

    static int m_A;
    int m_B;

private:

    static void func2()
    {
        cout << "func2的调用" << endl;
    }
};

int Person::m_A = 10;    // 静态成员变量只能：类内声明，类外初始化

void test01()
{
    //1. 通过对象
    Person p1;
    p1.func1();
    cout << "p1.m_A" << p1.m_A << endl;

    // 2. 通过类名
    Person::func1();
    // Person::func2();  //私有权限访问不到
}

int main()
{
    test01();
    return 0;
}
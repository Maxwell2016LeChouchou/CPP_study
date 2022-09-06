#include <iostream>
using namespace std;

// 4.2.8 静态成员
// 静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员

// 静态成员分为：

//     静态成员变量
//         所有对象共享同一份数据
//         在编译阶段分配内存
//         类内声明，类外初始化
//     静态成员函数
//         所有对象共享同一个函数
//         静态成员函数只能访问静态成员变量


//示例1：静态成员变量

class Person
{

public:
    static int m_A; // 静态成员变量

private:
    static int m_B;
};

int Person::m_A = 10;  // 类外初始化
int Person::m_B = 10;

void test01()
{
    // 静态成员变量两种访问方式

    // 1. 通过对象
    Person p1;
    p1.m_A = 100;
    cout << "p1.m_A " << p1.m_A << endl;
    // p1.m_B = 200;  // 错误，无法访问

    Person p2;
    p2.m_A = 200;
    cout << "p1.m_A " << p1.m_A << endl; // 与p2.m_A 共享同一块数据
    cout << "p2.m_A " << p2.m_A << endl;
    
    // 2. 通过类名
    cout << "m_A = " << Person::m_A <<endl;

    // cout << "m_B= " << Person::m_B << endl;

}

int main()
{
    test01();
    return 0;
}

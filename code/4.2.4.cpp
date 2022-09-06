#include <iostream>
using namespace std;

// 4.2.4 构造函数调用规则

// 默认情况下，c++编译器至少给一个类添加3个函数

// 1．默认构造函数(无参，函数体为空)

// 2．默认析构函数(无参，函数体为空)

// 3．默认拷贝构造函数，对属性进行值拷贝

// 构造函数调用规则如下：

//     如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造

//     如果用户定义拷贝构造函数，c++不会再提供其他构造函数




class Person
{

public:
    Person()
    {
        cout << "无参 (默认）构造函数" <<endl;
    }

    Person(int a)
    {
        m_age = a;
        cout << "有参构造函数" <<endl;
    }

    Person(const Person& p)
    {
        m_age = p.m_age;
        cout << "拷贝构造函数" << endl;
    }

    ~Person()
    {
        cout << "析构函数" <<endl;
    }

public:
    int m_age;

};

void test01()
{

    Person p0;  //默认（无参）构造函数

    Person p1(30);  // 有参构造函数

    Person p2(p1);  // 拷贝构造函数

    Person p3 = p1; // 拷贝构造函数

    cout << "p2 of test01" << p2.m_age << endl;

    cout << "p3 of test01" << p3.m_age << endl;
}

int main()
{
    test01();
    return 0;
}
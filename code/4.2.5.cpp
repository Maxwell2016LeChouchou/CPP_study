#include <iostream>
using namespace std;

// 4.2.5 深拷贝与浅拷贝

// 深浅拷贝是面试经典问题，也是常见的一个坑

// 浅拷贝：简单的赋值拷贝操作

// 深拷贝：在堆区重新申请空间，进行拷贝操作

class Person{

public:

    Person()
    {
        cout << "默认无参构造函数" << endl;
    }

    Person(int age, int height)
    {
        cout << "有参构造函数" <<endl;
        m_age = age;
        m_height = new int(height);
    }

    Person(const Person& p)
    {
        cout << "拷贝构造函数" <<endl;
        m_age = p.m_age;
        m_height = new int(*p.m_height);
    }
    ~Person()
    {
        cout << "析构函数" <<endl;
        if(m_height != NULL)
        {
            delete m_height;
        }
    }

public:
    int m_age;
    int *m_height;

};

void test01()
{
    Person p0;
    Person p1(10, 130);
    cout << "p1的年龄 " << p1.m_age << *p1.m_height << endl;
    Person p2(p1);
    cout << "p2的年龄 " << p2.m_age << *p2.m_height << endl;

}

int main()
{
    test01();
    return 0;
}
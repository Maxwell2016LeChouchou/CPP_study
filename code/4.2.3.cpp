#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "无参构造函数" << endl;
    }
    Person(int age)
    {
        cout << "有参构造函数" << endl;
        m_age = age;
    }
    Person(const Person& p)
    {
        cout << "拷贝构造函数" << endl;
        m_age = p.m_age;
    }
    ~Person()
    {
        cout << "析构函数" << endl;
    }
private:
    int m_age;
};

void test01()
{
    Person p(200);
    Person new_p(p);
    Person new_p2 = p;
}

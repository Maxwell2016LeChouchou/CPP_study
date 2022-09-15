// #### 1.3.1 类模板语法

// 类模板作用：

// * 建立一个通用类，类中的成员 数据类型可以不具体制定，用一个**虚拟的类型**来代表。

#include <iostream>
#include <string>
using namespace std;

template<class Type1, class Type2>
class Person
{
public:
    Person(Type1 name, Type2 age )
    {
        this->m_name = name;
        this->m_age = age;
    }
    void show1()
    {
        cout << "name: " << this->m_name << " age: " << this->m_age << endl;
    }

public:
    Type1 m_name;
    Type2 m_age;
};


template<class Type1, class Type2>
class Offer
{
public:
    Offer(Type1 job, Type2 location)
    {
        this-> m_job = job;
        this->m_location = location;
    }
    void show2()
    {
        cout << "job title: " << this->m_job << " location: " << this->m_location << endl;
    }

    public: 
        Type1 m_job;
        Type2 m_location;
};

void test01()
{
    Person<string, int>P1("max", 30);
    P1.show1();
}

void test02()
{
    Offer<string, string>P2("SDE", "Toronto");
    P2.show2();
}

int main()
{
    test01();
    test02();
    return 0;
}
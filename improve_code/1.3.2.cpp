
// #### 1.3.2 类模板与函数模板区别

// 类模板与函数模板区别主要有两点：

// 1. 类模板没有自动类型推导的使用方式
// 2. 类模板在模板参数列表中可以有默认参数


#include <iostream>
#include <string>
using namespace std;

template <class NameType, class AgeType=int>
class Person
{
public:   
    Person(NameType name, AgeType age)
    {
        this->m_name = name;
        this->m_age = age;
    }

    void showPerson()
    {
        cout << "name " << this->m_name << " age " << this->m_age << endl;
    }

public:
    NameType m_name;
    AgeType m_age;    
};


void test01()
{
    Person <string, int> p1("max", 30);
    p1.showPerson();
}

void test02()
{
    Person<string> p2("jason", 18);
    p2.showPerson();
}

void test03()
{
    Person<int, int>p3(20, 40); 
    p3.showPerson();
}

int main()
{
    test01();
    test02();
    test03();
    return 0;
}

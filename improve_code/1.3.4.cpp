// #### 1.3.4 类模板对象做函数参数

// 学习目标：

// * 类模板实例化出的对象，向函数传参的方式


// 一共有三种传入方式：

// 1. 指定传入的类型   --- 直接显示对象的数据类型
// 2. 参数模板化           --- 将对象中的参数变为模板进行传递
// 3. 整个类模板化       --- 将这个对象类型 模板化进行传递

#include <iostream>
#include <string>
using namespace std;

template<class NameType, class AgeType=int>
class  Person
{
public:
    Person(NameType name, AgeType age)
    {
        this->m_name = name;
        this->m_age = age;
    }

    void showPerson()
    {
        cout << "name " << this->m_name << " age " <<  this->m_age << endl;

    }
    NameType m_name;
    AgeType m_age;
};

// 1. 指定传入的类型
void printPerson1(Person<string, int> &p)
{
    p.showPerson();
    cout << "string 类型为：" << typeid(string).name() << endl;
    cout << "int 类型为: " << typeid(int).name() << endl;
}

void test01()
{
    Person<string, int>p("max", 10);
    printPerson1(p);
}

// 2. 参数模板化
template <class T1, class T2>
void printPerson2(Person <T1, T2>&p)
{
    p.showPerson();
    cout << "T1的类型为：" << typeid(T1).name() << endl;
    cout << "T2的类型为：" << typeid(T2).name() << endl; 
}

void test02()
{
    Person <string, int>p("jianzhou", 30);
    printPerson2(p);
}

// 3. 整个参数化模板
template <class T>
void printPerson3(T &p)
{
    cout << "T的类型为： " << typeid(T).name() << endl;
    p.showPerson();
}

void test03()
{
    Person<string, int>p("wang", 30);
    printPerson3(p);
}

int main()
{
    test01();
    test02();
    test03();
    return 0;
}







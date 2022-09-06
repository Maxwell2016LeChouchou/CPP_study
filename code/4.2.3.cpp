#include <iostream>
using namespace std;

// 4.2.3 拷贝构造函数调用时机

// C++中拷贝构造函数调用时机通常有三种情况

//     使用一个已经创建完毕的对象来初始化一个新对象
//     值传递的方式给函数参数传值
//     以值方式返回局部对象


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

//1. 使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
    Person p(200);            // p对象创建完毕
    cout << "1111" << endl;
    Person new_p(p);     // 调用拷贝构造函数
    cout << "2222" << endl;
    Person new_p2 = p;   //调用拷贝构造
    cout << "3333" << endl;
}

// 2. 值传递的方式给函数参数传值
// 相当于 Person  p1 = p;

void doWork(Person p1){}

void test02()
{
    Person p; // 无参构造函数
    cout << "4444" << endl;
    doWork(p); // 拷贝构造
    cout << "5555" << endl;
}

// 3. 以值方式返回局部对象
Person doWork2()
{
    Person p1;
    cout << "6666" << endl;
    cout << &p1 << endl;
    return p1;
}

void test03()
{
    Person p = doWork2(); // 以值方式返回
    cout << "7777" << endl;
    cout << (int *)&p << endl;
}

int main()
{
    test03();
    return 0;
}

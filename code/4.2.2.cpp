#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "default constructor" << endl;
    }

    Person(int a)
    {
        age = a;
        cout << "age1 " << age << endl;
        cout << "有参构造函数" << endl;
    }

    Person (const Person& p)
    {
        age = p.age;
        cout << "age2 " << age << endl;
        cout << "拷贝构造函数" << endl;
    }

    ~Person()
    {
        cout << "destructor" << endl;
    }

private:
    int age;
};

void test()
{
    Person p0;

    Person p1(10);  //括号法

    Person p2 = Person(p1);   // 拷贝构造函数：显示法

    Person p3 = 20;  // 隐式转化法

    Person p4 = p3;  // 隐式转化法，不能用 Person p4(p3)拷贝构造函数 初始化匿名对象 编译器认为是对象声明
}

int main()
{

    test();
    return 0;

}

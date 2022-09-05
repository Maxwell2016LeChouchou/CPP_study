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
    //注意1：调用无参构造函数不能加括号，如果加了编译器认为这是一个函数声明

    Person p2 = Person(p1);   // 拷贝构造函数：显示法

    Person p3 = 20;  // 隐式转化法

    cout << "000" << endl;
    Person p4(p3);
    cout << "111" << endl;

    Person p5 = p3;  
    //注意2：不能利用 拷贝构造函数 初始化匿名对象 编译器认为是对象声明
}

int main()
{

    test();
    return 0;

}

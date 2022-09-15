// #### 1.3.3 类模板中成员函数创建时机


// 类模板中成员函数和普通类中成员函数创建时机是有区别的：

// * 普通类中的成员函数一开始就可以创建
// * 类模板中的成员函数在调用时才创建


#include <iostream>
#include <string>
using namespace std;

class Person1
{
public:
    void showPerson1()
    {
        cout << "Person1 show" << endl;
    }
};

class Person2
{
public:
    void showPerson2()
    {
        cout << "Person2 show" << endl;
    }
};

template <class T>
class MyClass
{
    public:
        T obj;
        // 在类模板中的成员函数，并不是一开始就创建，而是在模板调用再生成。

        void fun1(){
            obj.showPerson1();           
        }

        void fun2()
        {
            obj.showPerson2();
        }
};

void test01()
{
    MyClass<Person1> m;
    m.fun1();
}

void test02()
{
    MyClass<Person2> n;
    n.fun2();
}

int main()
{
    test01();
    test02();
    return 0;
}

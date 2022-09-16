#include <iostream>
using namespace std;

// #### 1.3.5 类模板与继承


// 当类模板碰到继承时，需要注意以下几点：

// * 当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
// * 如果不指定，编译器无法给子类分配内存
// * 如果想灵活指定出父类中T的类型，子类也需变为类模板


template <class T>
class Base
{
    T m;
} ;

// 当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
class Son : public Base<int>
{

};

void test01()
{
    Son C;
}

//类模板继承类模板 ,可以用T2指定父类中的T类型

template <class T1, class T2>
class Son2 : public Base<T2>
{
public:
    Son2()
    {
        cout << typeid(T1).name() << endl;
        cout << typeid(T2).name() << endl;
    }
};

void test02()
{
    Son2<string, string> child1;
}

int main()
{
    test01();
    test02();
}
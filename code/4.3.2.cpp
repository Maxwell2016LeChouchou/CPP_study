#include <iostream>
using namespace std;

// #### 4.3.2 this指针概念

// 通过4.3.1我们知道在C++中成员变量和成员函数是分开存储的

// 每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象会共用一块代码

// 那么问题是：这一块代码是如何区分那个对象调用自己的呢？



// c++通过提供特殊的对象指针，this指针，解决上述问题。**this指针指向被调用的成员函数所属的对象**



// this指针是隐含每一个非静态成员函数内的一种指针

// this指针不需要定义，直接使用即可



// this指针的用途：

// *  当形参和成员变量同名时，可用this指针来区分
// *  在类的非静态成员函数中返回对象本身，可使用return *this


class Person
{
public:
    Person(int age)
    {
        this->age = age;  //this -> age 指向的是下面 静态成员函数 int age
    }

    Person& PersonAddPerson()

    int age;

}
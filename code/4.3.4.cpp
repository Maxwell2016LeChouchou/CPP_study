#include <iostream>
using namespace std;

// #### 4.3.4 const修饰成员函数


// **常函数：**

// * 成员函数后加const后我们称为这个函数为**常函数**
// * 常函数内不可以修改成员属性
// * 成员属性声明时加关键字mutable后，在常函数中依然可以修改


// **常对象：**

// * 声明对象前加const称该对象为常对象
// * 常对象只能调用常函数


class Person
{
public:
    Person()
    {
        m_A = 0;
        m_B = 0;
    }

	//this指针的本质是一个指针常量，指针的指向不可修改
	//如果想让指针指向的值也不可以修改，需要声明常函数
    void ShowPerson() const  
    {
        //const Type* const pointer;
		//this = NULL; //不能修改指针的指向 Person* const this;
		this->m_A = 100; //但是this指针指向的对象的数据是可以修改的

		//const修饰成员函数，表示指针指向的内存空间的数据不能修改，除了mutable修饰的变量
        this->m_B = 100;

    }

    void func() const{
        this->m_A = 1000; // 没有用mutable则无法修改
    }

    mutable int m_A;
    mutable int m_B;
};

//const修饰对象  常对象

void test01()
{
    const Person person;
    cout << person.m_A << endl;
    person.m_B = 10;
    person.func();
    cout << person.m_A << endl;
    cout << person.m_B << endl;
    person.ShowPerson();
    cout << person.m_B << endl;
}

int main()
{
    test01();
    return 0;
}


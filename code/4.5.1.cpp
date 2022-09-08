#include <iostream>
using namespace std;

// ### 4.5 运算符重载

// 运算符重载概念：对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型

// #### 4.5.1 加号运算符重载


// 作用：实现两个自定义数据类型相加的运算


class Person
{
public:
    Person(){};
    Person(int a, int b)
    {
        m_A = a;
        m_B = b;
    }

    // 成员函数方式                                                    // mark 1
    Person operator+(const Person &p)
    {
        Person temp;
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        cout << "2222" << endl;
        return temp;
    }

public:
    int m_A;
    int m_B;
};

// // 全局函数实现 + 号运算符重载                   // mark 2
// Person operator+(const Person& p1, const Person& p2) {
// 	Person temp(0, 0);
// 	temp.m_A = p1.m_A + p2.m_A;
// 	temp.m_B = p1.m_B + p2.m_B;
//     cout << "1111" << endl;
// 	return temp;
// }


/// mark2 的全局函数实现与mark1的成员函数实现一样, 如果mark 1 和 mark 2都解注释，则优先使用成员函数方式

Person operator+(const Person &p1, int val)
{
    Person temp;
    temp.m_A = p1.m_A + val;
    temp.m_B = p1.m_A + val;
    return temp;
}

void test01()
{
    Person p1(10, 10);
    Person p2(20, 20);

	//成员函数方式
	Person p3 = p2 + p1;  //相当于 p2.operator+(p1)
   	cout << "mA:" << p3.m_A << " mB:" << p3.m_B << endl;


	Person p4 = p3 + 10; //相当于 operator+(p3,10)
	cout << "mA:" << p4.m_A << " mB:" << p4.m_B << endl;

}

int main()
{
    test01();
    return 0;
}
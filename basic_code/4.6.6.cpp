// #### 4.6.6 继承同名静态成员处理方式



// 问题：继承中同名的静态成员在子类对象上如何进行访问？



// 静态成员和非静态成员出现同名，处理方式一致



// - 访问子类同名成员   直接访问即可
// - 访问父类同名成员   需要加作用域


// **示例：**

#include <iostream>
using namespace std;


class Base {
public:
	static void func()
	{
		cout << "Base - static void func()" << endl;
	}
	static void func(int a)
	{
		cout << "Base - static void func(int a)" << a << endl;;
	}

	static int m_A;
};

int Base::m_A = 100;

class Son : public Base {
public:
	static void func()
	{
		cout << "Son - static void func()" << endl;
	}
	static int m_A;
};

int Son::m_A = 200;

//同名成员属性
void test01()
{
	//通过对象访问
	cout << "通过对象访问： " << endl;  
	Base b;
    b.func();  // Base - static void func()
    b.func(10);  // Base - static void func(int a) 10
	cout << "Base 下的 m_A = " << b.m_A << endl; // 100
	Son s;
    s. func(); // Son - static void func()
	cout << "Son  下 m_A = " << s.m_A << endl; // 200
	cout << "Base 下 m_A = " << s.Base::m_A << endl;  // 100

	//通过类名访问
	cout << "通过类名访问： " << endl;
	cout << "Son  下 m_A = " << Son::m_A << endl; //200
	cout << "Base 下 m_A = " << Son::Base::m_A << endl;  //100
}

//同名成员函数
void test02()
{
	//通过对象访问
	cout << "通过对象访问： " << endl;
	Son s;
	s.func();     // Son - static void func()
	s.Base::func();   // Base - static void func()

	cout << "通过类名访问： " << endl;
	Son::func();  // Son - static void func()
	Son::Base::func();  // Base - static void func()
	//出现同名，子类会隐藏掉父类中所有同名成员函数，需要加作作用域访问
	Son::Base::func(100);   // Base - static void func(int a) 100
}
int main() {

	test01();
	// test02();

	return 0;
}


// > 总结：同名静态成员处理方式和非静态处理方式一样，只不过有两种访问的方式（通过对象 和 通过类名）
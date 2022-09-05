#include <iostream>
using namespace std;


int main() {

	int a = 10;
	int b = 20;
	//int &c; //错误，引用必须初始化
	int &c = a; //一旦初始化后，就不可以更改   // c = 10

    cout << &c << endl;
	c = b; //这是赋值操作，不是更改引用       // c =20

	cout << "a = " << a << endl; // 20
    cout << &a << endl;
	cout << "b = " << b << endl; // 20
    cout << &b << endl;
	cout << "c = " << c << endl; // 20
    cout << &c << endl;

	return 0;
}
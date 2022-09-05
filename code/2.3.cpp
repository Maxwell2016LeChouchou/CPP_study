#include <iostream>
using namespace std;

//1. 错误的值传递（这种方法无法传递，要么用指针要么用引用）
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

//2. 地址传递
void mySwap02(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3. 引用传递
void mySwap03(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {

	int a = 10;
	int b = 20;

	// mySwap01(a, b);
	// cout << "a:" << a << " b:" << b << endl;  

	mySwap02(&a, &b);
	cout << "a:" << a << " b:" << b << endl;

	// mySwap03(a, b);
	// cout << "a:" << a << " b:" << b << endl;

	system("pause");

	return 0;
}
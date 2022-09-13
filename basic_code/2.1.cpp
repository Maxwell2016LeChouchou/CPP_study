#include <iostream>
using namespace std;
int main() {

	int a = 10;
	int &b = a;

	cout << "a = " << a << endl; // 10
	cout << "b = " << b << endl; // 10

	b = 100;

	cout << "a = " << a << endl; // 100
	cout << "b = " << b << endl; // 100

	return 0;
}
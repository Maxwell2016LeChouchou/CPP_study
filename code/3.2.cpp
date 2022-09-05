#include <iostream>
using namespace std;

// 3.2函数占位参数

void func(int a, int)
{
    cout << "this is a func" << endl;
}

int main()
{
    func(10, 20);
    return 0;
}
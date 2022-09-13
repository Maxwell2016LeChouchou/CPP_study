#include <iostream>
using namespace std;


// 在C++中，类内的成员变量和成员函数分开存储

// 只有非静态成员变量才属于类的对象上

class Person{

public:
    Person()
    {
        m_A = 0;
        m_B = 1;

    }

    int m_A;
    static int m_B;
    void func()
    {
        cout << "mA: " << this->m_A << endl;
        cout << "mB: " << this->m_B << endl;
    }

    static void sfunc()
    {

    }
};

int main()
{
    cout << sizeof(Person) << endl;
    return 0;
}
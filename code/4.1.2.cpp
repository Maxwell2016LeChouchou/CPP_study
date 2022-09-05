// 4.1.2 struct 和 class区别
// class默认是私有，struct 默认是公有

#include <iostream>
using namespace std;

class C1
{
    public:
    int m_A;  // 默认私有
};

struct C2
{
    int m_A;
};

int main()
{
    C1 c1;
    c1.m_A = 10;
    cout << c1.m_A << endl;

    C2 c2;
    c2.m_A = 10;
    cout << c1.m_A << endl;

    return 0;
}
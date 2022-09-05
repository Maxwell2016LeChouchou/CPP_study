#include <iostream>
using namespace std;

class Person
{

public:
    Person()
    {
        cout << "constructor" << endl;
    }

    ~Person()
    {
        cout << "destructor" << endl;
    }
};

void test01()
{
    Person p;
}

int main()
{
    test01();
    return 0;
}
#include <iostream>
using namespace std;

// #### 4.3.3 空指针访问成员函数

// C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针

// 如果用到this指针，需要加以判断保证代码的健壮性


//空指针访问成员函数
class Person{

public:
    void showClassName()
    {
        cout << "我是class 类" << endl;
    }

    void PersonClass()
    {
        cout << "1111" << endl;
        if(this==NULL)
        {
            return;
        }
        cout << "mage" << mAge << endl;
    }
    int mAge;
};

void test01()
{
    Person *p = NULL;

    p->showClassName();   //空指针，可以调用成员函数
    p->PersonClass();         // 但是如果成员函数中用到了this指针，就不可以了
}

int main()
{
    test01();
    return 0;
}
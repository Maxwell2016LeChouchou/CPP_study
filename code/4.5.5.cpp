// #### 4.5.5 关系运算符重载

// **作用：**重载关系运算符，可以让两个自定义类型对象进行对比操作

#include  <iostream>
using namespace std;

class Person
{

public:
    Person(string name, int age)
    {
        this->m_age = age;
        this->m_name = name;
    }

    bool operator==(Person &p)
    {
        if(this->m_age == p.m_age && this->m_name == p.m_name)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator != (Person &p)
    {
        if(this->m_age == p.m_age && this->m_name == p.m_name)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    string m_name;
    int m_age;

};

void test()
{
    Person p("马云", 50);
    Person p1("马化腾", 55);
    Person p2("马云", 50);

    if(p == p1)
    {
        cout << "马云 == 马化腾"  << endl;
        cout << "50 == 55"  << endl;
    }
    else
    {
        cout << "马云 != 马化腾"  << endl;
        cout << "50 != 55"  << endl;
    }

    if(p == p2)
    {
        cout << "马云 == 马云"  << endl;
        cout << "50 == 50"  << endl;
    }
    else
    {
        cout << "马云 != 马云"  << endl;
        cout << "50 != 50"  << endl;
    }

}

int main()
{
    test();
    return 0;
}
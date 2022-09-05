// 将成员属性设置为私有，有如下优点：
// 1. 自己控制读写权限
// 2. 对于写权限，我们可以检测数据的有效性

#include <iostream>
using namespace std;


class Person
{

public:
    void setName(string name)
    {
        m_Name = name;
    }
    string getName()
    {
        return m_Name;
    }

    void setAge(int age)
    {
        m_Age = age;
    }
    int getAge()
    {
        return  m_Age;
    }

    void setLover(string lover)
    {
        m_Lover = lover;
    }

private:
    string m_Name;
    int m_Age;
    string m_Lover;

};

int main()
{
    Person p; 
    p.setName("Jianzhou");
    cout << "Name of the Candidate: " << p.getName() << endl;

    p.setAge(30);
    cout << "Age of the Candidate: " << p.getAge() << endl;

    p.setLover("Lina");

    return 0;
}


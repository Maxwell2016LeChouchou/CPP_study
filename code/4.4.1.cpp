// 友元的三种实现

// * 全局函数做友元
// * 类做友元
// * 成员函数做友元

#include <iostream>
using namespace std;

// 全局函数做友元

class Building 
{
    // 告诉编译器，goodGay 是全局函数，是Building类的好朋友，可以访问类中的私有内容
    friend void goodGay(Building * building);

public:

    Building()
    {
        this->m_LivingRoom = "Living room";
        this->m_BedRoom = "Bedroom";
    }

    string m_LivingRoom;

private:

    string m_BedRoom;

};

void goodGay(Building * building)
{
    cout << "GoodGay is visiting " << building->m_LivingRoom << endl;
    cout << "GoodGay is visiting " << building->m_BedRoom << endl;
}

void test01()
{
    Building b;
    goodGay(&b);
}

int main()
{
    test01();
    return 0;
}
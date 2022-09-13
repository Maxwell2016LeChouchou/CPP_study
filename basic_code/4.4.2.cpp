#include <iostream>
using namespace std;

// 类做友元

class Building
{
    friend class goodGay;

public:
    Building();

public:
    string m_livingroom;
private:
    string m_bedroom;

};


class goodGay
{

public:

    goodGay();
    void visit();

private:
    Building *building; // 使用指针

    // Building building; //不使用指针

};


Building::Building()
{
    this->m_livingroom = "living room";  
    this->m_bedroom = "bedroom";          
}

goodGay::goodGay()
{
    building = new Building; // 使用指针 在堆区开辟一块空间让指针指向其，否则会报段错误
}

void goodGay::visit()
{
    cout << "goodgay is visiting " << building->m_livingroom << endl; //使用指针
    cout << "goodgay is visiting " << building->m_bedroom << endl;    //使用指针

    // cout << "goodgay is visiting " << building.m_livingroom << endl; // 不用指针
    // cout << "goodgay is visiting " << building.m_bedroom << endl;    //不用指针

}

void test01()
{
    goodGay gg;
    gg.visit();
}

int main()
{
    test01();
    return 0;
}
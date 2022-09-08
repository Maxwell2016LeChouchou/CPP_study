#include <iostream>
using namespace std;

// 成员函数做友元

class Building;
class goodGay
{

public:
    goodGay();  // 默认构造函数
    void visit();  //成员函数
    void visit01();  //成员函数

private: 
    Building *building;

};

class Building
{
    friend void goodGay::visit01();  // 这里只让visit01作为Building的友元

public:
    Building();  //默认构造函数

    string m_livingroom;

private:
    string m_bedroom;
};


Building::Building()
{
    this->m_livingroom = "living room";
    this->m_bedroom = "bedroom";
}

goodGay::goodGay()
{
    building = new Building;
}

void goodGay::visit()
{
    cout << "your friend is visiting: " << building->m_livingroom << endl;
    // cout << "your friend is visiting " << building->m_bedroom << endl; // 错误，visit()没有被友元，无法访问private的m_bedroom
}

void goodGay::visit01()
{
    cout << "your friend is visiting " << building->m_livingroom << endl;
    cout << "your friend is visiting " << building->m_bedroom << endl;
}

int main()
{
    goodGay gg;
    gg.visit();
    gg.visit01();
    return 0;
}
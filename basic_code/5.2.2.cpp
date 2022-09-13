// #### 5.2.2 读文件

// 二进制方式读文件主要利用流对象调用成员函数read

// 函数原型：`istream& read(char *buffer,int len);`

// 参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Person
{
public:
    char m_Name[64];
    int m_Age;
};

void test()
{
    ifstream ifs("person.txt", ios::in | ios::binary);
    if(!ifs.is_open())
    {
        cout << "open file failed" << endl;
    }

    Person p;
    ifs.read((char *)&p, sizeof(p));

    cout << "name: " << p.m_Name << " age: " << p.m_Age << endl;
}

int main()
{
    test();
    return 0;
}
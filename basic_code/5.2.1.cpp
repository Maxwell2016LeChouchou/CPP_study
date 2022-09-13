// ### 5.2 二进制文件

// 以二进制的方式对文件进行读写操作

// 打开方式要指定为 ==ios::binary==


// #### 5.2.1 写文件

// 二进制方式写文件主要利用流对象调用成员函数write

// 函数原型 ：`ostream& write(const char * buffer,int len);`

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
    ofstream ofs("person.txt", ios::out| ios::binary);

    Person p = {"wangjianzhou", 18};

    ofs.write((const char *)&p, sizeof(p));

    ofs.close();

}

int main()
{
    test();
    return 0;
}

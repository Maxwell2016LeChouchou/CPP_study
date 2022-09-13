#include <iostream>
using namespace std;

// 设计一个学生类，属性有学生姓名和学号，可以给姓名和学号赋值，可以显示学生姓名和学号

class Student
{
public:
    void setName(string name)
    {
        m_name = name;
    }
    void setNum(int num)
    {
        m_num = num;
    }
    void showStudent()
    {
        cout << "name " << m_name << "   ID: " << m_num << endl;
    }
private:
    string m_name;
    int m_num;
};

int main()
{
    Student stu;
    stu.setName("Jianzhou Wang");
    stu.setNum(6696168);
    stu.showStudent();
    return 0;
}
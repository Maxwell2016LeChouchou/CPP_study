#include <iostream>
using namespace std;

// 封装
#include <iostream>
using namespace std;

// 设计一个圆类，计算圆的周长
// 圆周率
const double PI = 3.14;

// 1. 封装的意义在于将属性（定义一个变量等）和行为（用函数对变量进行操作）

// 封装一个圆类，求圆的周长
// class代表设计一个类，后面跟着的类名

class Circle
{
    public: // 访问权限 公共的权限

    //属性
    int m_r; //半径

    //行为
    //获取到圆的周长
    double calculateZC()
    {
        return 2*PI*m_r;
    }
};

int main()
{
    //通过圆类，创建一个圆的对象
    // c1就是一个具体的圆
    Circle c;
    c.m_r = 10;  // 给圆对象的半径，进行赋值操作
    c.calculateZC();
    cout << "周长：" << c.calculateZC() << endl;
    return 0;
}

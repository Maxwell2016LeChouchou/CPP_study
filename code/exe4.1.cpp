#include <iostream>
using namespace std;

// **练习案例1：设计立方体类**

// 设计立方体类(Cube)

// 求出立方体的面积和体积

// 分别用全局函数和成员函数判断两个立方体是否相等。

class Cube
{

public:
    
    void set_mH(float h)
    {
        m_H = h;
    } 
    float get_mH()
    {
        return m_H;
    }

    void set_mW(float w)
    {
        m_W = w;
    }
    float get_mW()
    {
        return m_W;
    }

    void set_mL(float l)
    {
        m_L = l;
    }
    float get_mL()
    {
        return m_L;
    }

private:
    float m_H;
    float m_W;
    float m_L;

};

int main()
{
    Cube c;
    cout << "Please input length of the cube: " << endl;
    float l;
    cin >> l;
    c.set_mL(l);

    cout << "Please input width of the cube: " << endl;
    float w;
    cin >> w;
    c.set_mW(l);
    
    cout  << "Please input height of the cube: " << endl;
    float h;
    cin >> h;
    c.set_mH(h);
    
    // find area of the cube
    float area =  2*c.get_mH()*c.get_mL() + 2*c.get_mH()*c.get_mW() +  2*c.get_mW()*c.get_mL();

    cout << "The area of the cube: " << area << endl; 

    //find volume of the cube
    float volume =  c.get_mH()*c.get_mL() *c.get_mW();

    cout << "The volume of the cube: " << volume << endl;


    return 0;

}
#include <iostream>
using namespace std;

// **练习案例1：设计立方体类**

// 设计立方体类(Cube)

// 求出立方体的面积和体积

// 分别用全局函数和成员函数判断两个立方体是否相等。



class Cube
{

    // Cube(float h, float w, float l)
    // {
    //     m_H = h;
    //     m_W = w;
    //     m_L = l;     
    // }

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
        m_W= w;
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

bool same(Cube c1, Cube c)
{
    if (c1.get_mH() == c.get_mH() && c1.get_mL() == c.get_mL() && c1.get_mW() == c.get_mW())
    {
        return true; 
    }

    else return false;

}

int main()
{
  
    Cube c1;
    cout << "Please input length of the cube1: " << endl;
    float l1;
    cin >> l1;
    c1.set_mL(l1);

    cout << "Please input width of the cube1: " << endl;
    float w1;
    cin >> w1;
    c1.set_mW(w1);
    
    cout  << "Please input height of the cube1: " << endl;
    float h1;
    cin >> h1;
    c1.set_mH(h1);
    
    // find area of the cube
    float area1 =  2*c1.get_mH()*c1.get_mL() + 2*c1.get_mH()*c1.get_mW() +  2*c1.get_mW()*c1.get_mL();

    cout << "The area of the cube1: " << area1 << endl; 

    //find volume of the cube
    float volume1 = c1.get_mH()*c1.get_mL() *c1.get_mW();

    cout << "The volume of the cube1: " << volume1 << endl;


    Cube c2;
    cout << "Please input length of the cube2: " << endl;
    float l2;
    cin >> l2;
    c2.set_mL(l2);

    cout << "Please input width of the cube2: " << endl;
    float w2;
    cin >> w2;
    c2.set_mW(w2);

    cout << "Please input the height of the cube2: " << endl;
    float h2;
    cin >> h2;
    c2.set_mH(h2);

     // find area of the cube
    float area2 =  2*c2.get_mH()*c2.get_mL() + 2*c2.get_mH()*c2.get_mW() +  2*c2.get_mW()*c2.get_mL();

    cout << "The area of the cube1: " << area2 << endl; 

    //find volume of the cube
    float volume2 = c2.get_mH()*c2.get_mL() *c2.get_mW();

    cout << "The volume of the cube1: " << volume2 << endl;

    same(c1, c2);
    cout << same(c1, c2) << endl;

    return 0;

}
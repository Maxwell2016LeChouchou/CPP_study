#include <iostream>
using namespace std;

// **练习案例1：设计立方体类**

// 设计立方体类(Cube)

// 求出立方体的面积和体积

// 分别用全局函数和成员函数判断两个立方体是否相等。



class Cube
{

    Cube(float h, float w, float l)
    {
        m_H = h;
        m_W = w;
        m_L = l;     
    }

public:

    float get_mH()
    {
        return m_H;
    }


    float get_mW()
    {
        return m_W;
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
    Cube c(1,2,3);

    vector<vector<float>> arr_l; 
    
    // find area of the cube
    float area =  2*c.get_mH()*c.get_mL() + 2*c.get_mH()*c.get_mW() +  2*c.get_mW()*c.get_mL();

    cout << "The area of the cube: " << area << endl; 

    //find volume of the cube
    float volume = c.get_mH()*c.get_mL() *c.get_mW();

    cout << "The volume of the cube: " << volume << endl;

    Cube c1;
    cout << "Please input length of the cube: " << endl;
    float l1;
    cin >> arr_l[0][] // 这里可以用for循环存数组;
    c1.set_mL(arr_l(0));
    c.set_mL(arr_l(1));

    cout << "Please input width of the cube: " << endl;
    float w1;
    cin >> w1;
    c1.set_mW(w1);
    
    cout  << "Please input height of the cube: " << endl;
    float h1;
    cin >> h1;
    c1.set_mH(h1);
    
    // find area of the cube
    float area1 =  2*c1.get_mH()*c1.get_mL() + 2*c1.get_mH()*c1.get_mW() +  2*c1.get_mW()*c1.get_mL();

    cout << "The area of the cube1: " << area1 << endl; 

    //find volume of the cube
    float volume1 = c1.get_mH()*c1.get_mL() *c1.get_mW();

    cout << "The volume of the cube1: " << volume1 << endl;

    same(c, c1);
    cout << same(c, c1) << endl;

    return 0;

}
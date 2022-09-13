#include <iostream>
using namespace std;
//多态实现
//抽象计算器类
//多态优点：代码组织结构清晰，可读性强，利于前期和后期的扩展以及维护

class BaseCalculator 
{
public:
    virtual int getResult()
    {
        return 0;
    }

    int num1;
    int num2;

};


class AddCalculator: public BaseCalculator
{
public:
    int getResult()
    {
        return num1 + num2;
    }

};

class MultiCalculator:public BaseCalculator
{
public:
    int getResult()
    {
        return num1*num2;
    }
};

class SubCalculator:public BaseCalculator
{
public:
    int getResult()
    {
        return num1 - num2;
    }
};

void test()
{
    BaseCalculator *bc = new AddCalculator;
    bc->num1 = 5;
    bc->num2 = 2;
    cout << bc->num1 << "+" << bc->num2 << "="  << bc->getResult()<< endl;
    delete bc;

    bc = new MultiCalculator;
    bc -> num1 = 10;
    bc -> num2 = 3;
    cout << bc->num1 << "*" << bc->num2 << "=" << bc->getResult() << endl;
    delete bc;

    bc = new SubCalculator;
    bc -> num1 = 3;
    bc -> num2 = 4;
    cout << bc->num1 << "-" << bc->num2 << "=" << bc->getResult() << endl;
   delete bc;

}

int main()
{
    test();
    return 0;
}

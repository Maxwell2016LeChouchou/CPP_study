#include <iostream>
using namespace std;
// #### 4.7.5 虚析构和纯虚析构

// 多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码


// 解决方式：将父类中的析构函数改为**虚析构**或者**纯虚析构**


// 虚析构和纯虚析构共性：

// * 可以解决父类指针释放子类对象
// * 都需要有具体的函数实现

// 虚析构和纯虚析构区别：

// * 如果是纯虚析构，该类属于抽象类，无法实例化对象


// 虚析构语法：

// `virtual ~类名(){}`

// 纯虚析构语法：

// ` virtual ~类名() = 0;`

// `类名::~类名(){}`

class Animal{
public:
    Animal()
    {
        cout << "Animal's constructor" << endl;
    }
    virtual void Speak()=0;
    
    // virtual ~Animal()  // 虚析构语法
    // {
    //     cout << "Animal's destructor" << endl;
    // }

    virtual ~Animal() = 0; // 纯虚析构语法，无任何内容
};

Animal::~Animal() //这里跟virtual ~Animal()产生一样的效果
{
    cout << "Animal's 纯析构函数调用" << endl;
}

class Cat : public Animal
{
public:
    Cat(string name)
    {
        cout << "Cat构造函数" << endl;
        m_Name = new string(name);
    }

    virtual void Speak()
    {
        cout << *m_Name << "在说话" << endl;
    }
    ~Cat()
    {
        cout << "Cat析构函数" << endl;
        if(this->m_Name != NULL){
            delete m_Name;
            m_Name = NULL;
        }
    }

string *m_Name;
};

void test01()
{
    Animal *animal = new Cat("Tom");
    animal->Speak();
    delete animal;

}

int main()
{
    test01();
    return 0;
}


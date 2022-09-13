#include <iostream>
using namespace std;


// #### 4.7.6 多态案例三-电脑组装

// **案例描述：**


// 电脑主要组成部件为 CPU（用于计算），显卡（用于显示），内存条（用于存储）

// 将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如Intel厂商和Lenovo厂商

// 创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口

// 测试时组装三台不同的电脑进行工作

// 抽象CPU类
class CPU
{
public:
    // 抽象计算函数
    virtual void calculate() = 0;
};

// 抽象显卡类
class VideoCard
{
public:
    // 抽象显示函数
    virtual void display() = 0;
};

// 抽象内存条
class Memory
{
public:
    // 抽象存储函数
    virtual void save() = 0;
};

class Computer 
{
public:
    Computer(CPU *cpu, VideoCard *vc, Memory *mem)
    {
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;
    }  
    void work()
    {
        m_cpu->calculate();
        m_vc->display();
        m_mem->save();
    }
    ~Computer()
    {
        if(m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }
        if(m_vc != NULL)
        {
            delete m_vc;
            m_vc = NULL;
        }
        if(m_mem != NULL)
        {
            delete m_mem;
            m_mem = NULL;
        }
    }
private:
    CPU *m_cpu;
    VideoCard *m_vc;
    Memory *m_mem;
};

// Intel厂商
class IntelCPU : public CPU
{
public:
    virtual void calculate()
    {
        cout << "Intel's CPU is working" << endl;
    }
};

class IntelVideoCard : public VideoCard
{
public:
    virtual void display()
    {
        cout << "Intel's videocard is working" << endl;
    }    
};

class IntelMemory : public Memory
{
public:
    virtual void save()
    {
        cout << "Intel's memory is working" << endl;
    }
};

// Lenovo厂商
class LenovoCPU : public CPU
{
public:
    virtual void calculate()
    {
        cout << "Lenovo's CPU is working" << endl;
    }
};

class LenovoVideoCard : public VideoCard
{
public:
    virtual void display()
    {
        cout << "Lenovo's videocard is working" << endl;
    }
};

class LenovoMemory : public Memory
{
public:
    virtual void save()
    {
        cout << "Lenovo's memory is working" << endl;
    }
};

void test01()
{
    // CPU *intel_cpu = new IntelCPU;
    // VideoCard *intel_video_card = new IntelVideoCard;
    // Memory *intel_memory = new IntelMemory;

    // 上述可以无需定义，在 computer * computer1中可以直接在括号里申明


    cout << "First computer is working " << endl;

    // Computer * computer1 = new Computer(new IntelCPU, new IntelVideoCard, new IntelMemory);
    Computer * computer1 = new Computer(new IntelCPU, new IntelVideoCard, new IntelMemory);
    computer1->work();
    delete computer1;

    cout << "-------------------------" << endl;

    cout << "Second computer is working " << endl;
    Computer * computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
    computer2->work();
    delete computer2;

    cout << "-------------------------" << endl;
    cout << "Third computer is working " << endl;
    Computer * computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
    computer3->work();
    delete computer3;

}

int main()
{
    test01();
    return 0;
}






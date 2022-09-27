// 案例描述:  实现一个通用的数组类，要求如下：

// * 可以对内置数据类型以及自定义数据类型的数据进行存储
// * 将数组中的数据存储到堆区
// * 构造函数中可以传入数组的容量
// * 提供对应的拷贝构造函数以及operator=防止浅拷贝问题
// * 提供尾插法和尾删法对数组中的数据进行增加和删除
// * 可以通过下标的方式访问数组中的元素
// * 可以获取数组中当前元素个数和数组的容量


#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray
{
public:
    MyArray(int capacity)
    {
        this->m_Capacity = capacity;
        this->m_Size = 0;
        pAddress = new T[this->m_Capacity];
    }

    MyArray(const MyArray & arr){
        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        this->pAddress = new T[this->m_Capacity];
        for(int i = 0; i < this->m_Size; i++)
        {
            // 如果T为对象，而且还包含指针，必须需要重载 = 操作符，因为这个等号不是 构造 而是赋值，
            // If T is the member and has pointer, this needs overload = operator, since = is to assign value, not to consturct
			// 普通类型可以直接= 但是指针类型需要深拷贝
            // regular type can give =. but pointer needs a deep copy
            this->pAddress[i] = arr.pAddress[i];
        }
    }
    MyArray& operator=(const MyArray& myarray){
        if(this->pAddress != NULL)
        {
            delete[] this->pAddress;
            this->m_Capacity = 0;
            this->m_Size = 0;
        }
        
        this->m_Capacity = myarray.m_Capacity;
        this->m_Size = myarray.m_Size;
        this->pAddress = new T[this->m_Capacity];
        for(int i = 0; i < this->m_Size; i++)
        {
            this->pAddress[i] = myarray[i];
        }
        return *this;
    }

    //重载[] 操作符 arr[0]
    // overload [] operator arr[0]
    T& operator [](int index)
    {
        return this->pAddress[index]; // 不考虑越界，用户自己去处理
    }

    // 尾插法 
    // tail insert
    void Push_back(const T & val)
    {
        if(this->m_Capacity == this->m_Size)
        {
            return;
        }
        this->pAddress[this->m_Size] = val;
        this->m_Size++;
    }
    
    // 尾删法
    // tail delete
    void Pop_back()
    {
        if(this->m_Size == 0)
        {
            return;
        }
        this->m_Size--;
    }

    // 获取数组容量
    // obtain array capacity
    int getCapacity()
    {
        return this->m_Capacity;
    }

    // 获取数组大小
    // obain array size
    int getSize()
    {
        return this->m_Size;
    }

    ~MyArray()
    {
        if(this->pAddress != NULL)
        {
            delete[] this->pAddress;
            this->pAddress = NULL;
            this->m_Capacity = 0;
            this->m_Size = 0;
        }
    }

private:
    T * pAddress; //指向一个堆空间，这个空间存储真正的数据 // pointe to a heap memory to store data
    int m_Capacity; 
    int m_Size; 
};
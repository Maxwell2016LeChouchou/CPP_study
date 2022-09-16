#pragma once
#include <iostream>
using namespace std;
#include <string>

template<class T1, class T2>
class Person{
public:
    Person(T1 name, T2 age);
    void showPerson();

public:
    T1 m_Name;
    T2 m_Age;
};

// constructor --- implement outside of the class
template <class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age){
    this->m_Name = name;
    this->m_Age = age;
}

// member function --- implement outside of the class
template <class T1, class T2>
void Person<T1, T2>::showPerson(){
    cout << "name: " << this->m_Name << " age: " << this->m_Age << endl;
}


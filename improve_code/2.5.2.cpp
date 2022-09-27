#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Person{
public:
    Person(string name, int age){
        mName = name;
        mAge = age;
    }

public:
    string mName;
    int mAge;
};

//存放对象
void test01(){
    vector<Person> v;
    Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++){
        cout << "name111 " << it->mName << " age111 " << it->mAge << endl;
        cout << "name222 " << (*it).mName << " age222 " << (*it).mAge << endl;
        
    }
}

// 放对象指针
void test02(){
    vector<Person*> v;
    Person p1("fff", 60);
	Person p2("ggg", 70);
	Person p3("hhh", 80);
	Person p4("iii", 90);
	Person p5("jjj", 100);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

    for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++){
        Person *p = (*it);
        cout << "name1 " << p->mName << " age1 " << (*it)->mAge << endl;
        cout << "name2 " << (*it)->mName << " age2 " << p->mAge << endl;
    }
}

int main()
{
    test01();
    test02();
    return 0;
}





#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <ctime>
#include <stdlib.h>
using namespace std;

// #### 3.4.1 案例描述

// 有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。


// #### 3.4.2 实现步骤

// 1. 创建五名选手，放到vector中
// 2. 遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
// 3. sort算法对deque容器中分数排序，去除最高和最低分
// 4. deque容器遍历一遍，累加总分
// 5. 获取平均分

class Person
{
public:
    Person(string name, int score){
        this->m_name = name;
        this->m_score = score;
    }
    string m_name;
    int m_score;
};

void createPerson(vector<Person>&v)
{
    string nameSeed = "ABCDE";
    for(int i = 0; i < 5; i++){
        string name = "candidate";
        name += nameSeed[i];
        cout << "name " << name << endl;

        int score = 0;

        Person p(name, score);

        v.push_back(p);
    }
}

void setScore(vector<Person>&v){
    for(vector<Person>::iterator it = v.begin(); it != v.end(); it++){
        deque<int> d;
        for(int i = 0; i < 10; i++){
            int score = rand()% 41+ 60; // 60 ~ 100
            d.push_back(score);
        }

        sort(d.begin(), d.end());

        d.pop_back();
        d.pop_front();

        int sum = 0;
        for(deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
        {
            sum += *dit;
        }
        int avg = sum / d.size();

        it->m_score = avg;
    }
}

void showScore(vector<Person>&v)
{
    for(vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "name：" << it->m_name << "average " << it->m_score << endl;
    }
}

int main()
{
    srand((unsigned int)time(NULL));  
    vector<Person>v;
    createPerson(v);
    setScore(v);
    showScore(v);
    return 0;
}
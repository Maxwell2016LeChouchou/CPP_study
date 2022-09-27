#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void MyPrint(int val)
{
    cout << val << endl;
}

void test01(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    vector<int>::iterator pBegin = v.begin();
    vector<int>::iterator pEnd = v.end();

    // first way to traversal
    while (pBegin != pEnd){
        cout << *pBegin << endl;
        pBegin++;
    }
    cout << endl;

    // second way to traversal
    for(vector<int>::iterator it=v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }
    cout << endl;

    // third way to traversal
    for_each(v.begin(), v.end(), MyPrint);
}

int main(){
    test01();
    return 0;
}

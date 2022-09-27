#include <deque>
#include <iostream>
using namespace std;

void printDeque(const deque<int>& d){
    for(deque<int>::const_iterator it = d.begin(); it != d.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int> d;
    d.push_back(10);  
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);

	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";  // 200 100 10 20
	}
	cout << endl;


	for (int i = 0; i < d.size(); i++) {
		cout << d.at(i) << " ";
	}
	cout << endl;

	cout << "front:" << d.front() << endl;  // 200

	cout << "back:" << d.back() << endl;    // 20
}

int main()
{
    test01();
    return 0;

}
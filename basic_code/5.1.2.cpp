#include <fstream>
#include <string>
#include <iostream>

using namespace std;

void test()
{
    ifstream ifs;
    ifs.open("test.txt", ios::in);

    if(!ifs.is_open())
    {
        cout << "open file failed" << endl;
        return;
    }

    
    //第一种方式
	//char buf[1024] = { 0 }; 表示定义了一个大小为1024的char数组，并将所有元素赋值为0。
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}

	//第二种
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf,sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

    //第三种
	string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}

    char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}

	ifs.close();
}

int main()
{
    test();
    return 0;
}
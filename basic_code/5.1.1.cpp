#include <fstream>
using namespace std;

void test01()
{
    ofstream ofs;
    ofs.open("/Users/jianzhouwang/Desktop/CPP/CPP_study/code/test.txt", ios::out);
    ofs << "wang jian zhou"<< endl;
    ofs << "30" << endl;

    ofs.close();
}

int main()
{
    test01();
    return 0;
}
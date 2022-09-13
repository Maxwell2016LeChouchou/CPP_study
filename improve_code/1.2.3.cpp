
// #### 1.2.3 函数模板案例

// 案例描述：

// * 利用函数模板封装一个排序的函数，可以对**不同数据类型数组**进行排序
// * 排序规则从大到小，排序算法为**选择排序**
// * 分别利用**char数组**和**int数组**进行测试

#include <iostream>
using namespace std;

template<typename T>

void mySwap(T &a, T&b)
{
    T temp = a;
    a = b;
    b = temp;
}

template<class T>

void mySort(T arr[], int len)
{
    for(int i = 0; i < len; i++)
    {
        int max = i;
        for (int j = i+1; j < len; j++)
        {
            if(arr[max] < arr[j]) // from large to small
            {
                max = j;
            }
            // if(arr[j] < arr[max]) // from small to large
            // {
            //     max = j;
            // }
        }
        if(max != i)
        {
            mySwap(arr[max], arr[i]);
        }
    }
}
template <typename T>
void printArray(T arr[], int len)
{
    for (int i=0; i < len; i++)
    {
        // cout << arr[i] << endl;
        cout << arr[i] << " ";
    }
    cout << endl;

}

void test01()
{
    char charArr[] = "daceb";
    int len = sizeof(charArr) / sizeof(char);
    mySort(charArr, len);
    printArray(charArr, len);
}

void test02()
{
    int intArr[] = {5, 2, 1, 3, 4};
    int len = sizeof(intArr) / sizeof(int);
    mySort(intArr, len);
    printArray(intArr, len);
}

int main()
{
    test01();
    test02();
    return 0;
}





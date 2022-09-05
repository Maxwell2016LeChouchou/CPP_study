#include <iostream>
using namespace std;
int main()
{
    //int* arr = new int[10];
    
    int arr[10];

    for (int i=0; i < 13; i++)
    {
        arr[i] = i + 100;
    }
    for (int i=0; i < 13; i++)
    {
        cout << arr[i] << endl;
    }
    // delete[] arr;

    return 0;

}
#include <iostream>

using namespace std;
void printArray1 (int param[] , int size )
{
    for (int i = 0; i < size; i++)
    {
        cout << param[i] << endl;
    }
}
void printArray2 (int *param , int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << param[i] << endl;
    }
}
int main()
{
    int size = 5;
    int arr[size] = {1,2,3,4,5};
    printArray1(arr, size);
    cout << "Line" << endl;
    printArray2(arr, size);
    return 0;
}

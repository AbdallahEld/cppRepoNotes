#include <iostream>

using namespace std;

int* toRturnPointer()
{
    static int arr[5] = {2,5,6,7,9};
    return arr;
}

int main()
{
    int* myArray = toRturnPointer();
    for (int i = 0; i < 5; i ++)
    {
        cout << *myArray << endl;
        *myArray++;
    }
    return 0;
}

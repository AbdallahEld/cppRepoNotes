#include <iostream>

using namespace std;
printLine() {
    for(int i = 0; i < 20;i++)
    {
        cout << '*';
    }
    cout << endl;
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int* ptr;
    ptr=arr;
    for (int i = 0;i < 5;i++)
    {
        cout << arr[i] << endl;
    }
    printLine();
    //v3
    for (int i = 0;i < 5;i++)
    {
        cout << "enter" << endl;
        cin >> ptr[i];
    }
    for (int i = 0;i < 5;i++)
    {
        cout << ptr[i] << endl;
    }
    printLine();
    // v1
    for (int i = 1;i <= 5;i++)
    {
        *ptr = i * 10;
        ptr++;
    }
    ptr = arr;
    for (int i = 0;i < 5;i++)
    {
        cout << *ptr << endl;
        ptr++;
    }
    ptr = arr; // assign pointer to first value of array again
    printLine();

    //v2
    for (int i = 0;i < 5;i++)
    {
        *(ptr + i) = (i + 1 ) * 5;
    }
    for (int i = 0;i < 5;i++)
    {
        cout << *ptr << endl;
        ptr++;
    }
    printLine();
    return 0;
}

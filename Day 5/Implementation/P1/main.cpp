#include <iostream>

//2- try dynamic allocation
// for pointer to integer read and write  2ways
using namespace std;

int main()
{
    int size;
    cout << "Enter Array size" << endl;
    cin >> size;
    int *ptr = new int [size];
    //v1
    for (int i = 0; i < size;i++)
    {
        cout << "Enter Element Number " << i << endl;
        cin >> *(ptr+i);
    }

    for (int i = 0; i < size;i++)
    {
        cout << *(ptr+i) << endl;
    }
    //v2
    for (int i = 0; i < size;i++)
    {
        cout << "Enter Element Number " << i << endl;
        cin >> ptr[i];
    }
    return 0;
}

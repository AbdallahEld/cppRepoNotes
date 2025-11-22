#include <iostream>

using namespace std;

int main()
{

    int size;
    cout << "Enter Array Size" << endl;
    cin >> size;
    int arr[size];
    for(int i = 0;i < size; i++)
    {
        cout << "Insert array number " << i << endl;
        cin >> arr[i];
    }
    int max, min;
    int ma = 0 , mi = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[mi] > arr[i]){mi = i;}
        if(arr[ma] < arr[i]){ma = i;}
        max = arr[ma];
        min = arr[mi];
    }
    cout << "max is "  << max << endl;
    cout << "min is " << min << endl;
    return 0;
}

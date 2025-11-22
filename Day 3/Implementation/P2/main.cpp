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
    for(int i = 0;i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int cartona = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = cartona;
            }
        }
    }
    for (int i = 0; i < size;i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int target, targetIndex = 0;
    int arr[3] = {3,2,5};
    cout << "Enter your Target Number" << endl;
    cin >> target;
    //t = 5
    // i = 0, tI = 2
    //[3,2,5]
    for(int i = 0; i < 3; i++)
    {
        if (arr[i] == target)
        {
            targetIndex = i;
            break;
        }
    }
    if (arr[targetIndex] = target)
    {
        cout << "Target at index " <<targetIndex;
    }
    else
    {
        cout << "Invalid";
    }
    return 0;
}

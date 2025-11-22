#include <iostream>

using namespace std;

int main()
{
    //5,6,7,8
    int arr[3][4];
    arr[0][0] = 1; arr[0][1] = 2;arr[0][2] = 3; arr[0][3] = 4;
    arr [1][0] = 5; arr[1][1] = 6;arr[1][2] = 7; arr[1][3] = 8;
    arr [2][0] = 9; arr[2][1] = 10;arr[2][2] = 11; arr[2][3] = 12;

    //arr[3][4] = {(1,2,3,4),()}

    for(int i = 0; i < 4; i++)
    {
        int columnAvg = 0;
        for (int j = 0;j < 3; j++)
        {
            columnAvg = columnAvg + arr[j][i];
        }
        cout << "avg of Column number " << i + 1 << " is " << columnAvg/3 << endl;
    }
    return 0;
}

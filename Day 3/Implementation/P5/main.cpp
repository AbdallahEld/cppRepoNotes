#include <iostream>

using namespace std;

int main()
{
    int arrARows = 2, arrACols = 3;
    int arrA[arrARows][arrACols];
    arrA[0][0] = 2; arrA[0][1] = 4; arrA[0][2] = 1;
    arrA[1][0] = 3; arrA[1][1] = 0; arrA[1][2] = 5;

    int arrBRows = 3, arrBCols = 2;
    int arrB[3][2];
    arrB[0][0] = 1; arrB[0][1] = 3;
    arrB[1][0] = 2; arrB[1][1] = 4;
    arrB[2][0] = 0; arrB[2][1] = 6;

    int arrC[arrARows][arrBCols];

    for (int i = 0;i < arrARows;i++)
    {
        for (int j = 0; j < arrBCols; j++)
        {
            arrC[i][j] = 0;
            for(int k = 0; k < arrACols; k++)
            {
                arrC[i][j] = arrC[i][j] + (arrA[i][k] * arrB[k][j]);
            }
        }
    }


    for(int i = 0; i<2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arrC[i][j] << endl;
        }
    }


    return 0;
}

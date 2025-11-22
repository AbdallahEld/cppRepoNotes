#include <iostream>

using namespace std;
//3
int main()
{
    int row, col;
    cout << "Enter number of rows" << endl;
    cin >> row;
    cout << "Enter number of cols" << endl;
    cin >> col;

    int **ptrArr;
    ptrArr = new int *[row];

    for (int i = 0; i < row;i++)
    {
        ptrArr[i] = new int [col];
    }

    for (int i = 0; i < row;i++)
    {
        for (int j = 0; j < col;j++)
        {
            cout << "Enter Number " << "["<<i <<"]"<< "["<< j << "]" << endl;
            cin >> ptrArr[i][j];
        }
    }


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << endl <<ptrArr[i][j] << endl;
        }
        cout << endl;
    }
    return 0;
}

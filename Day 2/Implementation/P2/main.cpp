
#include <stdlib.h>
#include <windows.h>
#include<iostream>
using namespace std;

void gotoxy( int column, int row )
{
    COORD coord;
    coord.X = column;
    coord.Y = row;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}

int main()
{
    int size , row , col;
    size = 3;
    row = 1;
    col = size / 2 + 1;

    for (int i = 1; i <= size*size; i++)
    {
        gotoxy(col , row);
        cout << i;
        if (i % size != 0)
            {
                row--;
                col--;
                if(row<1){row = size;}
                if(col<1){col = size;}
            }
            else
            {
                row++;
            }
    }
}

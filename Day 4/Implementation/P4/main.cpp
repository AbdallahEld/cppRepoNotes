#include <iostream>

using namespace std;
void swapV(int x , int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void swapA(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 10 , b = 15;
    cout << "a = " << a << " b = " << b << endl;
    swapV(a , b);
    cout <<  "By Value " << " a = " << a << " b = " << b << endl;
    swapA(&a, &b);
    cout << "By Address " <<" a = " << a << " b = " << b << endl;
    return 0;
}

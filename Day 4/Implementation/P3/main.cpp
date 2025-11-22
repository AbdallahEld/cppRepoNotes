#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;
    int **ptrToPtr = &ptr;
    cout << x << endl;
    cin >> **ptrToPtr;
    cout << x << endl;
    return 0;
}

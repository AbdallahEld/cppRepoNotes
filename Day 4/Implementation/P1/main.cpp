#include <iostream>

using namespace std;

int main()
{
    int x = 55;
    int *ptr = &x;

    cout << x << endl;
    cout << "Enter new value to x" << endl;
    cin >> *ptr;
    cout << x;
    return 0;
}

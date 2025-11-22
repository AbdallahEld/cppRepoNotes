#include <iostream>

using namespace std;
//1
int main()
{
    int* ptr = new int;
    //v1
    cin >> *ptr;
    cout << *ptr;
    return 0;
}

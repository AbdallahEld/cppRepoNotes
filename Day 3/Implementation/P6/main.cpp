#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char name[50];
    char ch;
    int i=0;
    cout<<"Enter name\n";
    do
    {
        ch=getche();
        name[i]=ch;
        i++;
    }
    while(ch!=13);

    for (i = 0; i < 15; i ++)
    {
        if (name[i] == 13) {break;}
    }
    for (i; i >= 0; i--)
    {
        cout << name[i];
    }
    return 0;
}

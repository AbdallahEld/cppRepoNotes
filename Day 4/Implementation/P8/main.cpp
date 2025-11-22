#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char fname[15] = "Abdallah ";
    char lname[15] = "Eldesouky";
    char fullname [30];
    strcpy(fullname , fname);
    strcat(fullname , lname);

    cout << fname << endl;
    cout << lname << endl;
    cout << fullname << endl;
    return 0;
}

#include <iostream>
#include <cstring>

using namespace std;
struct Employee
{
    int Id;
    char name[18];
    int age;
    float salary;
};

int main()
{
    Employee e1;
    e1.Id = 101;
    strcpy(e1.name,"Abdallah");
    e1.age = 22;
    e1.salary = 5000;

    Employee *empPtr;
    empPtr = &e1;

    (*empPtr).Id = 102;
    strcpy((*empPtr).name, "Remando");
    empPtr->age = 23;
    empPtr->salary = 7000;

    cout << e1.age;
    return 0;
}

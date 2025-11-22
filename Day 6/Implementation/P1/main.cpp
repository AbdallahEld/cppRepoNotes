#include <iostream>

using namespace std;
class myClass
{
private:
    const int x = 5;
    int age;
    public:
    myClass(int age)
    {
        this -> age = age;
    }
    int getConstant()
    {
        return x;
    };

};
int main()
{
    myClass c1(22);
    cout << c1.getConstant() << endl;
    return 0;
}

#include <iostream>

using namespace std;

void Add (int x , int y)
{
cout << x + y << endl;
}
void Substract (int x , int y)
{
cout << x - y << endl;
}
void Devide (double x , double y)
{

cout << x / y << endl;
}
void Multi (int x , int y)
{
cout << x * y << endl;
}

int main()
{
    cout << "Welcome OwO" << endl;
    int isContinue = 0 , x , y ; char op;
    do
    {
        cout << "Enter first number" << endl;
        cin >> x;
        cout << "Enter second number" << endl;
        cin >> y;
        cout << "Enter one of these Operators +, -, /, *" << endl;
        cin >> op;
        switch (op)
        {
            case '+':
            Add(x,y);
            break;
            case '-':
            Substract(x,y);
            break;
            case '/':
                if (y == 0)
                {
                    cout << "Invalid cant devide by 0" << endl;
                }
                else
                {
                                Devide(x,y);
                }
            break;
            case '*':
            Multi(x,y);
            break;
            default:
            cout << "Invalid Input" << endl;
            break;
        }
        cout << "if you want to continue enter any number else press 0" << endl;
        cin >> isContinue;
    } while (isContinue);
}

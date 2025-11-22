#include <iostream>

using namespace std;
class Complex
{
    private:
    int real;
    int img;
    public:
    int getReal() {return real;}
    int getImg() {return img;}
    void setReal(int _real) {this->real = _real;}
    void setImg (int _img) {this->img = _img;}
    void print()
    {
        if (real > 0 && img > 0)
        {
            cout << this->real << " + " << this->img << "i" << endl;
        }
        else if ( real > 0 && img < 0)
        {
            cout << this->real << " - " << this->img * -1 << "i" << endl;
        }
        else if (real > 0 && img == 1)
        {
            cout << this->real << " + " << "i" << endl;
        }
        else if (real > 0 && img == -1)
        {
            cout << this->real << " - " << "i" << endl;
        }
        else if (real == 0 && img == 1)
        {
            cout << "i" << endl;
        }
        else if (real == 0 && img == -1)
        {
            cout << "-i" << endl;
        }
        else if (real == 0 && img == 0)
        {
            cout << 0 << endl;
        }
        else if (real > 0 && img == 0)
        {
            cout << this->real << endl;
        }
        else if (real < 0 && img == 0)
        {
            cout << this->real << endl;
        }
        else if (real < 0 && img < 0)
        {
            cout << this->real << " - " << this->img << "i" << endl;
        }
    }
    Complex Add(Complex c1)
    {
        Complex c2;
        c2.real = this->real + c1.real;
        c2.img = this->img + c1.img;
        return c2;
    }
};

Complex AddStandalone (Complex c1, Complex c2)
{
    Complex c3;
    c3.setReal(c1.getReal() + c2.getReal());
    c3.setImg(c1.getImg() + c2.getImg());
    return c3;
}
int main()
{ //-1,0 , 1,0
    Complex c1 , c2;
    int i1,i2,r1,r2;
    cout << "Complex 1" << endl;
    cout << "Enter Real 1" << endl;
    cin >> r1;
    cout << "Enter imaginary 1" << endl;
    cin >> i1;
    cout << "Complex 2" << endl;
    cout << "Enter Real 2" << endl;
    cin >> r2;
    cout << "Enter imaginary 2" << endl;
    cin >> i2;
    c1.setReal(r1);
    c1.setImg(i1);
    c1.print();
    c2.setReal(r2);
    c2.setImg(i2);
    c2.print();
    Complex c3;
    c3 = c1.Add(c2);
    c3.print();
    return 0;
}

#include <iostream>
using namespace std;

class Complex
{
    private:
        int a;     //real part
        float b;   // Imaginary part

    public:
        Complex()
        {
            a = 0;
            b = 0;
        }

        Complex(int x, int y)
        {
            a = x;
            b = y;
        }

        void print()
        {
            cout << a << "+" << "i" << b << endl;
        }
};

int main()
{
    Complex obj1;
    Complex obj2(4, 5);
    obj1.print();
    obj2.print();
    return 0;
}

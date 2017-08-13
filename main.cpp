#include <iostream>

using namespace std;

class Arithmetic
{
private:
   int a[2];

public:
    Arithmetic()
    {
        for (int i = 0; i < 2; i++)
            a[i] = 0;
    }

    Arithmetic(int A, int B)
    {
        a[0] = A;
        a[1] = B;
    }

   void setArithmetic()
    {
        cout << "a = ";
        for(int i = 0; i < 2; i++)
             cin >> a[i];
    }

    void getArithmetic()
    {
        for(int i = 0; i < 2; i++)
            cout << a[i] << " ";
    }

    int sum()
    {
       return (a[0] + a[1]);
    }

    int multiply()
    {
        return (a[0] * a[1]);
    }

};

int main ()
{
    Arithmetic c;
    c.setArithmetic();
  //  c.getArithmetic();

    cout << "sum = " << c.sum() << endl;
    cout << "multiply = " << c.multiply();

    Arithmetic d(10,10);

    cout<< endl << "sum = " << d.sum() << endl;
    cout << "multiply = " << d.multiply();

    return 0;
}

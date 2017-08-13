#include <iostream>

using namespace std;

class Arithmetic
{
private:
    int a[2];

public:
    void numbers()
    {
        cout << "mass a = ";
        for (int i = 0; i < 2; i++)
            cin >> a[i];
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
    c.numbers();
    cout << "sum = " << c.sum() << endl;
    cout << "multiply = " << c.multiply();
    return 0;
}

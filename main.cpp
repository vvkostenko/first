#include <iostream>

using namespace std;

class Arithmetic
{
private:
    int a,b;

public:
    void numbers()
    {
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
    }

    int sum()
    {
        return a+b;
    }

    int multiply()
    {
        return a*b;
    }

};
int main ()
{
    Arithmetic c;
    c.numbers();
    cout << "sum = " << c.sum() << endl;
    cout << "multiply = " << c.multiply();
}

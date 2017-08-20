#include <iostream>
#include "Vector.h"

using namespace std;

int main ()
{
    MyVector c;
    c.setMyVector();
  //  c.getMyVector();

    cout << "sum = " << c.sum() << endl;

    MyVector d(5);
    d.setMyVector();
  //  d.getMyVector();

    cout << "sum = " << d.sum() << endl;

    return 0;
}

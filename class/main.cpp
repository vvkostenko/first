#include <iostream>

using namespace std;

class MyVector
{
private:
   int n = 3;
   int *array = new int[n];

public:
    MyVector()
    {
        for (int i = 0; i < n; i++)
            array[i] = 0;
    }

    MyVector(int k)
    {
       n = k;
    }

    ~MyVector()
    {
        if(array != NULL)
        {
            delete [] array;
        }

    }

   int setMyVector()
    {
        cout << "array = ";
        for(int i = 0; i < n; i++)
             cin >> array[i];
        return 0;
    }

    int getMyVector()
    {
        for(int i = 0; i < n; i++)
            cout << array[i] << " ";
        return 0;
    }

    int sum()
    {
       int s = 0;
       for (int i = 0; i < n; i++)
        s += array[i];
        return s;
    }

};

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

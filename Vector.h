#ifndef Vector_H
#define Vector_H

#include <iostream>

class MyVector
{
private:
   int n;
   int *array;

public:
    MyVector();
    MyVector(int k);
    ~MyVector();
   int setMyVector();
    int getMyVector();
    int sum();
};

#endif // _Vector_H

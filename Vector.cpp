#include "Vector.h"



MyVector::MyVector()
    {
       n = 3;
        for (int i = 0; i < n; i++)
            array[i] = 0;
    }

MyVector::MyVector(int k)
    {
       n = k;
    }

MyVector::~MyVector()
    {
        if(array != NULL)
        {
            delete [] array;
        }

    }

int MyVector::setMyVector()
    {
       std:: cout << "array = ";
        for(int i = 0; i < n; i++)
        std:: cin >> array[i];
        return 0;
    }

int MyVector::getMyVector()
    {
        for(int i = 0; i < n; i++)
        std:: cout << array[i] << " ";
        return 0;
    }

int MyVector::sum()
    {
       int s = 0;
       for (int i = 0; i < n; i++)
        s += array[i];
        return s;
    }


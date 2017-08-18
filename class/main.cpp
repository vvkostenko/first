#include <iostream>

// ???
using namespace std;

class MyVector
{
private:
   // Замечание: член-данные следует инициализировать в конструкторе
   // Также следует изменить название у n что-то, явно указывающее на смысл этого поля
   int n = 3;
   int *array = new int[n];

public:
   // Где-то тут съехала табуляция
    MyVector()
    {
        for (int i = 0; i < n; i++)
            array[i] = 0;
    }

   // Замечание: при изменении размеров вектора необходимо изменять и размеры массива
    MyVector(int k)
    {
       n = k;
    }

    ~MyVector()
    {
       // Данное условие лучше смотрится в том виде, что я тебе кидал
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

   // Замечание: по-хорошему, название переменной должно отражать то, зачем она нужна.
   // Просто учись избегать переменных с названием типа s или n - однобуквенные названия
   // неплохи только в роли индекса. Название у метода я б тоже пересмотрел, но да ладно
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

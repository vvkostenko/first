#include <iostream>
#include <string>

class A
{
public:
    static void writeln(std::string text)
    {
        std::cout << text << std::endl;
    }
};

int main()
{
    A::writeln("test");
    return 0;
}

#include <iostream>
#include <string>

int main()
{
    char name[10000];
    std::cout << "Input your name in the format [F M surname]" << std::endl;
    std::cin.getline(name, 10000);
    for (int i = 0; i < sizeof(name); i++)
    {
        if (name[i] == ' ')
        {
            std::cout << std::endl;
            i++;
        }
        if (name[i] == '\0')
            break;
        else
            std::cout << name[i];
    }
}

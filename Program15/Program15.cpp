#include <iostream>
#include <dos.h>

int main()
{
    bool repeat = true;
    int lines = 0;
    char stars = '*';
    char wish;
    bool incorrect;
    char waiting;

    while (repeat) 
    {
        while (lines < 1 || lines > 10)
        {
            incorrect = true;
            std::cout << "How many stars did you wish for?" << std::endl;
            std::cin >> lines;
        }

        for (int i = 0; i < lines; i++)
        {
            for (int n = 0; n <= i; n++)
            {
                std::cout << stars;
            }
            std::cout << std::endl;            
        }
        
        while (incorrect) 
        {
            std::cout << "Do you wanna wish again [Y/N]:";
            std::cin >> wish;
            if (wish == 'y' || wish == 'Y')
            {
                incorrect = false;
                lines = 0;
            }
            if (wish == 'n' || wish == 'N')
            {
                std::cout << "Goodbye";
                incorrect = false;
                repeat = false;
                std::cin >> waiting;
            }
        }
    }
}


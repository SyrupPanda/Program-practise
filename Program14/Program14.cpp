#include <iostream>

int main()
{
    int num1;
    int num2;
    int num3;
    int sum;
    float mean;
    bool loop = true;
    int total = 2;

    std::cout << "Please Input two numbers:" << std::endl;
    std::cin >> num1;
    std::cin >> num2;

    sum = num1 + num2;
    mean = sum / total;
    std::cout << "The sum is " << sum << ", the mean is " << mean << std::endl;

    while (loop)
    {
        std::cout << "Input another number:" << std::endl;
        std::cin >> num3;
        total++;
        if (num3 != 0)
        {
            sum += num3;
            mean = sum / total;
            std::cout << "The new sum is " << sum << ", the new mean is " << mean << std::endl;
        }
        else
            loop = false;
    }
}


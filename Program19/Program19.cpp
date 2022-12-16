#include <iostream>

bool even(int num)
{
    int rem = num % 2;
    if (rem == 0)
        return true;
    else
        return false;
}

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal) 
{
    std::cout << "The number of odds is " << numOfOdd << std::endl;
    std::cout << "The number of evens is " << numOfEven << std::endl;
    std::cout << "The total of odds is " << oddTotal << std::endl;
    std::cout << "The total of evens is " << evenTotal << std::endl;
}

int main()
{
    int numOfOdd = 0;
    int numOfEven = 0;
    int oddTotal = 0;
    int evenTotal = 0;
    int num;

    std::cout << "Enter 10 number:";
    for (int i = 0; i < 10; i++)
    {       
        std::cin >> num;
        if (even(num))
        {
            numOfEven++;
            evenTotal += num;
        }
        else
        {
            numOfOdd++;
            oddTotal += num;
        }
    }
    outputResults(numOfOdd, oddTotal, numOfEven, evenTotal);
}


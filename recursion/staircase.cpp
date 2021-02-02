#include <iostream>

int staircase(int n)
{
    if(n == 0 || n == 1)
        return 1;
    if(n == 2)
        return 2;
    return staircase(n-1) + staircase(n-2) + staircase(n-3);
}

int main()
{
    for (int i = 0; i <= 5; i++)
    {
        std::cout << staircase(i) << std::endl;
    }
    return 1;
}
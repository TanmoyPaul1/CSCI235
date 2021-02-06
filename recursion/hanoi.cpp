
/*
 * 
 can only move one disc at a time
discs must be either in transit or on a tower (never on the ground)
you can never place a larger disc on a smaller disc
*/

#include <iostream>

void hanoi(int n, char src, char dst, char tmp)
{
    if (n == 0)
    {
        std::cout << "You entered an invalid number!\n";
    }
    else if(n == 1)
    {
        std::cout << "Move disk from tower " << src << " to tower " << dst << ". \n";
    }
    else
    {
        hanoi(n - 1, src, tmp, dst);
        std::cout << "Move disk from tower " << src << " to tower " << dst << ". \n";
        hanoi(n - 1, tmp, dst, src);
    }
}

int main()
{
    char a = '1';
    char b = '2';
    char c = '3';

    for (int i = 0; i <= 4; i++)
    {
        std::cout << "\nHanoi with " << i << " pieces:\n" << std::endl;
        hanoi(i, a, c, b);
    }
}
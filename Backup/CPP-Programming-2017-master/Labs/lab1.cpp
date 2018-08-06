#include <iostream>

int gcd(const int a, const int b);
int phi(unsigned int n);

int main()
{
    auto n = 0;
    for (n = 1; n <= 10; n++)
        printf("phi(%d) = %d\n", n, phi(n));

    return 0;
}

//Function: gcd()
//Arguments: const int a, const int b - two int arguments to determine the gcd of 
//Return value: the greatest common denominator of two numbers 
int gcd(const int a, const int b)
{
   return 90;
}

//Function: phi()
//Arguments: unsigned int n - a number that we want to find all numbers relative prime to 
//Return: the count of all numbers relative prime to n 
int phi(unsigned int n)
{
    return 90;
}

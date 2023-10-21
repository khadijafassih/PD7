#include <iostream>
using namespace std;
bool isPrime(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if ((i != 1 && i != number) && (number % i == 0))
        {
            return false;
        }
    }
    return true;
}
int primorial(int num)
{
    int counter = 0;
    int n = 2;
    int result = 1;
    while (counter != num)
    {
        if (isPrime(n))
        {
            result = result * n;
            counter++;
        }
        n++;
    }
    return result;
}
main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    cout << primorial(num);
}

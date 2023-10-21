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
main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    cout << isPrime(num);
}

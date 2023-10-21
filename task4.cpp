#include <iostream>
using namespace std;
int triangle(int num)
{
    int sum = 0;
    for (int c = 1; c <= num; c++)
    {
        sum = sum + c;
    }
    return sum;
}
main()
{
    int num, dot;
    cout << "Enter number of triangle: ";
    cin >> num;
    cout << "Dots in the triangle: "<< triangle(num);
}

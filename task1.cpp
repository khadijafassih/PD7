#include<iostream>
using namespace std;
void printStar (int size)
{
    for(int c=1; c<=size; c++)
    {
         for(int r=size; r>=c; r--)
         {
            cout<<"*";
         }
         cout<<endl;
    }
}
main()
{
    int size;
    cout<<"Enter the desired size: ";
    cin>>size;
    printStar (size);
}
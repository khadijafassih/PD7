#include<iostream>
using namespace std;
void printStar (int size);
void printStar2 (int size)
{
    for(int c=1; c<=size; c++)
    {
       
         for(int r=1; r<=c; r++)
         {
            cout<<" ";
         }
         for(int k= size-1;k>=c; k--)
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
    printStar2 (size);
}

void printStar (int size)
{
    for(int c=1; c<=size; c++)
    {
       
         for(int r=size-1; r>=c; r--)
         {
            cout<<" ";
         }
         for(int k= 1;k<=c; k++)
         {
            cout<<"*";
         }
      
         cout<<endl;
    }
}
#include<iostream>
using namespace std;
void series (int num)
{
    for(int c=1; c<=num; c++)
    {  
         int amplify;
        if(c%4==0)
        {
            amplify=c*10;
            cout<<amplify<<" ,";
        }
        else{

     cout<<c<<", ";
        }
    }
}
main()
{
    int num;
    cout<<"Enter the number to amplify: ";
    cin>>num;
    series (num);
}
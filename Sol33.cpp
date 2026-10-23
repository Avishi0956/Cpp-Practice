#include<iostream>
using namespace std;
int main()
{
    int n,smallest=10,digit;
    cout<<"Enter Number: ";
    cin>>n;
    
    while(n>0)
    {
        digit=n%10;
        if(digit<smallest)
        {
            smallest=digit;
        }
        n=n/10;
    }
    

    cout<<"Smallest Digit: "<<smallest;

}
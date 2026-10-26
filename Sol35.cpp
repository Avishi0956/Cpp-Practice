#include<iostream>
using namespace std;
int main()
{
    int n,digit,sum=0,rev=0;
    cout<<"Enter number: ";
    cin>>n;

    //extracting digits
    while(n>0)
    {
        digit=n%10;
        
        if(digit%2==0)
        {
            cout<<"\nEven Digit: "<<digit;
            sum=sum+digit;
        }
        n=n/10;
    }


    
    cout<<"\nSum of even digits: "<<sum;
}
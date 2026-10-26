#include<iostream>
using namespace std;
 int main()
{
    long long int n,digit,sum=0;
    cout<<"Enter number: ";
    cin>>n;

    //extracting digits
    while(n>0)
    {
        digit=n%10;
        if(digit%2!=0)
        {
            cout<<"\nOdd Digit: "<<digit;
            sum=sum+digit;
        }
        n=n/10;
    }


    
    cout<<"\nSum of odd digits: "<<sum;
}
//PERFECT NUMBER (sum of its proper divisors equals the number)

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i=1;
    cout<<"Enter number: ";
    cin>>n;

    
    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    if(sum==n)
    {
        cout<<"Number is the perfect number";
    }
    else
    {
        cout<<"Number is not the perfect number";
    }
}
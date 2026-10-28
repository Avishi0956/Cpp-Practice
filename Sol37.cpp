#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,digit,p=0,i=0;
    cout<<"Enter binary number: ";
    cin>>n;
    while(n>0)
    {
        digit=n%10;
        p=p+digit*pow(2,i);
        cout<<digit*pow(2,i);
        n=n/10;
        i++;
        
    }
    
    cout<<"Decimal Number : "<<p;
}
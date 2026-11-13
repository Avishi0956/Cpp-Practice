//LCM

#include<iostream>
using namespace std;
int main()
{
    int n1,n2,max,i,j=1,k=1;
    cout<<"Enter first number: ";
    cin>>n1;

    cout<<"Enter second number: ";
    cin>>n2;

    //factors
    cout<<"\nFactors of n1: ";
    while(j<=n1)
    {
        if(n1%j==0)
        {
            cout<<j<<"\t";
        }
        j++;
    }
    cout<<"\nFactors of n2: ";
    while(k<=n2)
    {
        if(n2%k==0)
        {
            cout<<k<<"\t";
        }
        k++;
    }

    //lcm
    max=n1;       //max because, LCM can never be smaller than the bigger number.
    if(n2>max)
    {
        max=n2;
    }
    i=max;
    while(i>1)
    {
        if(i%n1==0 && i%n2==0)
        {
            break;
        }
        else
        {
            i=i+max;
        }
    }
    cout<<"\nCommon Factors: "<<i;
    cout<<"\nLCM: "<<i;
}
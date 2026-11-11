//HCF

#include<iostream>
using namespace std;
int main()
{ 
    int n1, n2, min,i,j=1,k=1;
    cout<<"Enter first number: ";
    cin>>n1;

    cout<<"Enter second number: ";
    cin>>n2;

    cout<<"\nFactors of "<<n1<<": ";
    while(j<=n1)
    {
        if(n1%j==0)
        {
            cout<<j<<"\t";
        }
        j++;
    }
    cout<<"\nFactors of "<<n2<<": ";
    while(k<=n2)
    {
        if(n2%k==0)
        {
            cout<<k<<"\t";
        }
        k++;
    }
    
    
    min=n1;                //min beacause, HCF can never be bigger than the smaller number.
    if(n2<min)
    {
        min=n2;
    }
    i=min;
    while(i>1)
    {
        if(n1%i==0 && n2%i==0)
        {
            break;
        }
        else
        {
            i--;
        }
    }
    cout<<"\nCommon Factors: "<<i;
    cout<<"\nHCF: "<<i;

}
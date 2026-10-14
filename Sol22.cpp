#include<iostream>
using namespace std;
int main()
{
    int n,a[50],sum=0;

    cout<<"How many Digits: ";
    cin>> n;

    //array input
    cout<<"Enter digits: ";
    for( int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }

    cout<<"Sum of digits: "<<sum;
}
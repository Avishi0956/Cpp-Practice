#include<iostream>
using namespace std;
int main()
{
    int n,first ,last,sum;
    cout<<"Enter Number: ";
    cin>>n;

    last=n%10;

    first=n;
    while(first>10)
    {
        first=first/10;
    }

    cout<<"First Digit: "<<first;
    cout<<"\nLast Digit: "<<last;

    sum=first+last;
    cout<<"\nSum: "<<sum;
}
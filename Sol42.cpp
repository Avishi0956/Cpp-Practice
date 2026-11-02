#include<iostream>
using namespace std;
int main()
{
    int num,p,x=1,i=1;
    cout<<"Enter number: ";
    cin>>num;

    cout<<"Enter power: ";
    cin>>p;

    while(i<=p)
    {
        x=num*x;
        i++;
    }

    cout<<num<<" to the power "<<p<<" = "<<x;
}

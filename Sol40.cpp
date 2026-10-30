#include<iostream>
using namespace std;
int main()
{
    int n,d,i=0;
    cout<<"Enter number: ";
    cin>>n;

    while(n>10)   //Keep removing last digits until only the first digit is left
    {
        d=n%10;
        if(d==0)
        {
            i++;
        }
        n=n/10;

    }

    if(n!=0 && i>=1)//i>=1 means we are not at first digit
    {
        cout<<"Number is duct number";
    }
    else
    {
        cout<<"Number is not duct number";
    }

}

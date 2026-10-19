#include<iostream>
using namespace std;
int main()
{
    int n,last ,first,temp;
    cout<<"Enter Number: ";
    cin>>n;

    last=n%10;

    first=n;
    while(first>10)
    {
        first=first/10;
    }

    cout<<"First Digit: "<<first<<endl;
    cout<<"Last Digit: "<<last<<endl;

    //swapping
    temp=first;
    first=last;
    last=temp;

    cout<<"\nSwapped Values: ";
    cout<<"\nFirst Value: "<<first;
    cout<<"\nLast Value: "<<last;
}








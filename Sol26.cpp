#include<iostream>
using namespace std;
int main()
{
    int n,last ,first;
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

}








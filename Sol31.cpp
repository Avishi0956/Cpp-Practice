#include<iostream>
using namespace std;
int main()
{
    int n,digit;
    cout<<"Enter Number: ";
    cin>>n;

    
    while(n>0)
    {
        digit=n%10;
        cout<<digit<<endl;

        n=n/10;
    }

}
#include<iostream>
using namespace std;
int main()
{
    int num,i=1;
    cout<<"Enter number: ";
    cin>>num;

    cout<<"Factors: ";
    while(i<=num)
    {
        if(num%i==0)
        {
            cout<<i<<"\t";
        }
        i++;
    }
}
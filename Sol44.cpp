#include<iostream>
using namespace std;
int main()
{
    int num,i=1,count=0;
    cout<<"Enter Number: ";
    cin>>num;

    cout<<"Factors: ";
    while(i<=num)
    {
        if(num%i==0)
        {
            count++;
            cout<<i<<"\t";
        }
        i++;
    }
    cout<<"\nTotal number of factors: "<<count;
}
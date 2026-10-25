#include<iostream>
using namespace std;
int main()
{
    int n,digit,largest=0,diff,smallest=10;
    cout<<"Enter Number: ";
    cin>>n;

    while(n>0)
    {
        digit=n%10;
        if(digit>largest)
        {
            largest=digit;
        }
        if(digit<smallest)
        {
            smallest=digit;
        }

        n=n/10;
    }

    cout<<"Largest Value: "<<largest;
    cout<<"\nSmallest Value: "<<smallest;


    diff=largest-smallest;
    cout<<"\nDifference between largest and smallest: "<<diff;
}
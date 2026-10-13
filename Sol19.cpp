#include<iostream>
using namespace std;
int main()
{
    cout<<"Numbers are:\t";
    for(int i=1;i<=100;i++)
    {
        if(i%3!=0)
        {
            cout<<i<<"\t";
        }
    }
}
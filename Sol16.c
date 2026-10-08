#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Year";
    cin>>n;

    if(n%4==0||n%400==0||n%100!=0)
    {
        cout<<"This is Leap Year";
    }
    else
        cout<<"Not a Leap Year";
}

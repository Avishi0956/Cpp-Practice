#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Year: ";
    cin>>n;

    if((n%4==0)||(n%400==0&&n%100!=0))
    {
        cout<<n<<"This is Leap Year"<<endl;
    }
    else
        cout<<n<<endl<<"Not a Leap Year"<<endl;
}

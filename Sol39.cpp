#include<iostream>
using namespace std;
#include<cmath>
int main()
{
    int n,octal=0,i=0,digit;
    cout<<"Enter Octal number: ";
    cin>>n;

    while(n > 0)
    {
        digit = n % 10;

        octal = octal + digit * pow(8,i);

        n = n / 10;
        i++;
    }

    cout << "Octal Number = " << octal;

    return 0;

}
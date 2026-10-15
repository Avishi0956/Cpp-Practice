#include<iostream>
using namespace std;

int main()
{
    int n, temp, reverse = 0, digit;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;   

    while(temp != 0)
    {
        digit = temp % 10;                 
        reverse = reverse * 10 + digit;    
        temp = temp / 10;                  
    }

    cout << "Reversed number: " << reverse;

    return 0;
}
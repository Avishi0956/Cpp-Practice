#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0, rem, temp;

    cout << "Enter number: ";
    cin >> n;

    temp = n;

    while(temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if(n == rev)
        cout << "Palindrome Number";
    else
        cout << "Not Palindrome";

    return 0;
}
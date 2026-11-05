IS IT PRIME NUMBER OR NOT?

#include<iostream>
using namespace std;
int main()
{
    int num,i=2,f=1;    //f=1 → flag variable
                        //1 means assume number is prime
                        //0 means not prime
    
    printf("Enter Number : ");
    scanf("%d",&num);
    if(num<2)  //Because no factor of a number (except itself) can be greater than half of it.
    {
        f=0;
    }
    else
    {
        while(i<=num/2)
        {
            if(num%i==0)
            {
                f=0;
                break;
            }
            i++;
        }
    }
    if(f==1)
    {
        printf("Number is prime");
    }
    else
    {
        printf("Number is not prime");
    }   
}
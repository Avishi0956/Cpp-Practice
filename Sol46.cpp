//PRIME NUMBER BETWEEN 1 AND N

#include<iostream>
using namespace std;
int main()
{
        int n,i=1,j,f=1;
    printf("Enter Range : ");
    scanf("%d",&n);
    while(i<=n)
    {
        f=1;
        j=2;
        while(j<=i/2)
        {
            if(i%j==0)
            {
                f=0;
                break;
            }
            j++;
        }
        if(f==1)
        {
            printf("%d\t",i);
        }
        i++;
    }

}
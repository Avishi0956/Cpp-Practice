#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,power=1;
    printf("Enter powers you want:");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {

       power=power*2;
       printf("2^%d=%d \t",i,power);

    }

}

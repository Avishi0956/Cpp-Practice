#include<stdio.h>
int main()
{
    int n,i,p;
    printf("Enter number of elements:");
    scanf("%d",&n);

    printf("Multiplication Table is: \n");
    for(i=1;i<=10;i++)
    {
      p=n*i;
      printf("%d X %d = %d\n",n,i,p);

    }








}

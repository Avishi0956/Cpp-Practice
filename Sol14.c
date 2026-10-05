#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);

 for (int i = 1; i <= 100; i++)
    {
        if (i % 5 != 0)
        {
            printf("%d ", i);
        }
    }

}


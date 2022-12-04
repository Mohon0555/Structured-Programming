#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Enter a number:");
    scanf("%d", &n);
    do
    {

        sum=sum+i;
        i++;

    }
    while(i<=n);
    printf("sum is: %d", sum);
    return 0;
}

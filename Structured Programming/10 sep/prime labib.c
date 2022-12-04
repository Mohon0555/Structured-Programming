#include<stdio.h>
int main ()
{
    /* Labib*/
    int i,n, mohon=0;
    scanf("%d", &n);
    // for(i = 2; i<100; i++)
    for(i = 2; i <= (n/i); i++)
        if(n%i==0)
        {
             mohon=1;
             break;
        }
        // if factor found, not prime
    if(mohon==0)
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);

    return 0;
}

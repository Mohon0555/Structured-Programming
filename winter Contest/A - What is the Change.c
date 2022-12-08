#include<stdio.h>
int main ()
{
    int yen;
    int mod=0, rem=0;
    scanf("%d",&yen);

    if(yen%1000==0)
    {
        printf("0");
    }
    else
    {
        mod= yen%1000;
        rem= 1000-mod;
        printf("%d",rem);
    }
    return 0;
}



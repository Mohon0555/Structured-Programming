#include<stdio.h>
#include<math.h>
#include<conio.h>
int mian()
{
    int num, moot;
    label:
    printf("enter a number");
    scanf("%d",&num);

    if (num>0)
    {
        moot=num*2;
    printf("the moot of %d is %d", num, moot);
    goto label;
    getch();
    }
    return 0;
}

#include<stdio.h>
int main ()
{
    int t;
    int i,j;
    int a,b;
    scanf("%d", &t);
    int ara[t][2];

    for(i=1; i<=t; i++)
    {
        for(j=1; j<=2; j++)
        {
            scanf("%d", &ara[i][j]);
        }
    }

    for(i=1; i<=t; i++)
    {
        for(j=1; j<=2; j++)
        {
            if(ara[i][j]>ara[i][j+1])
            {
                printf(">\n");
                break;
            }
            else if(ara[i][j]<ara[i][j+1])
            {

                printf("<\n");
                break;
            }
            else
            {
                printf("=\n");
                break;
            }
        }

    }
    return 0;
}

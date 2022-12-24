#include <stdio.h>
#include <string.h>
/* #include <math.h>
#include <stdlib.h> */

int main()
{
    int i,j;

    char ara[212];
    fgets(ara, sizeof(ara), stdin);

    int len= strlen(ara)-1;

    for(i=0; i<=len; i++)
    {
        if(ara[i]!= ara[len-i-1])
        {
            printf("This is Not Palindrome \n");
            break;
        }
        else
        {
            printf("This is Palindrome");
            break;
        }
    }

    return 0;
}



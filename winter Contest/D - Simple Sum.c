#include<stdio.h>
int main ()
{
    int v;
    int output=0;
    scanf("%d", &v);
    output= v+ v*v + v*v*v;
    printf("%d", output);
    return 0;
}

#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    fact(n);
    return 0;
}
int fact(int n)
{
    int i, arr[100], count = 0;
    printf("The factors of %d are: \n", n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            arr[count] = i;
            printf("%d\n", i);
            count++;
        }
    }
    printf("\nThe factors of %d in reverse order are: \n", n);
    for (i = count - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    int sum = 0;
    for (i = 0; i < count; i++)
        sum += arr[i];
    printf("\nThe sum of factors of %d is: %d\n", n, sum);
    return sum;
}

#include<stdio.h>
int factNumber(int num)
{
    int fact =1;
    for(int i=1;i<=num;i++)
    {
        fact = fact *i;
    }
    return fact;
}

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("Factorial = %d\n",factNumber(num));
}
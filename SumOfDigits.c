#include<stdio.h>
int main()
{
    int num,sum =0;
    printf("Enter a number\n");
    scanf("%d",&num);
    int rem;
    while(num > 0)
    {
        rem = num % 10;
        sum = sum +rem;
        num = num /10;
    }
    printf("Sum of digits = %d\n",sum);
    return 0;
}
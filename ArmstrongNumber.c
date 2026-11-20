#include<stdio.h>
int main()
{
    int num, original,remainder,sum=0;

    // Enter a number from the user
    printf("Enter a number\n");
    scanf("%d",&num);
    // Store the original number

    original = num;
    
    //  calculate the sum of cube of digits

    while(num > 0)
    {
        remainder=num %10;
        sum = sum + (remainder * remainder * remainder);
        num = num /10; 
    }

    // Check whether the number Armstrong or not 
    if(sum == original)
    {
        printf("Armstrong Number\n");
    }
    else
    {
        printf("Not an Armstrong Number\n");
    }
    return 0;
}
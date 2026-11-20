#include<stdio.h>
int main()
{
    int num;
    // Enter a number from the user 
    printf("Enter a number\n");
    scanf("%d",&num );
    // Check whether the number is even or add 
    if(num % 2 == 0)
    {
        printf("Even number\n");
    }
    else 
    {
       printf("Odd number\n");
    }
    
    return 0;
}
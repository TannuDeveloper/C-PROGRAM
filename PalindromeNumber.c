#include<stdio.h>
int palindromeNumber(int num)
{
    int temp,rem,rev;
    temp = num;
    while (temp > 0)
    {
        rem = temp % 10;
        rev = rev *10 + rem;
        temp = temp /10;
    }
    return rev;
}
int main()
{
     int num;
     printf("Enter a number\n");
     scanf("%d",&num);
     int rev=palindromeNumber(num);
     if(rev == num)
     {
        printf("Palindrome Number\n");
     }
     else
     {
        printf("Not Palindrome Number\n");
     }
     
    return 0;
}
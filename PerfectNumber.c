#include<stdio.h>
int perfectNumber(int num)
{
    int sum=0;
       //find the factors of the number
        for(int i=1;i<=num/2;i++)
        {
            // Check whether i is a factor of num
            if(num % i== 0)
            {
                // Add the factor to sum
                sum = sum + i;
            }
        }
      
    return sum;
}
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    int sum = perfectNumber(num);
     // Check whether the sum is equal to the number
    if(num > 0 && sum == num)
    {
     printf(" %d is a Perfect Number",num);
    }
   else{
     printf(" %d is not a perfect number",num);
     }
    return 0;
}
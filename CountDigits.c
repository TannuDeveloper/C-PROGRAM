#include<stdio.h>
int main()
{
    int num,count = 0;
    // Take input from user
    printf("Enter a number\n");
    scanf("%d",&num);
    // count digits 
    if(num == 0)
    {
        count = 1;
    }
    else
    {
        while(num > 0)
        {
            // count increase
            count++;
            num = num / 10;
        }
    }
    // Display total digits 
    printf("Total digits = %d\n",count);

    return 0;
}
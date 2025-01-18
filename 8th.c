/* Bit Manipulation*/
/* Problem: Divide two integers without using multiplication,division,and mod operator*/
#include<stdio.h>
#include<stdlib.h>
int divide(int dividend, int divisor)
{
    if(divisor == 0)
    {
    printf("Invalid Division");
    exit(0);
    }
    //Determining sign of quotient
    int sign = ((dividend < 0)^(divisor < 0))? -1: 1;
    unsigned int absolute_dividend = abs(dividend);
    unsigned int absolute_divisor = abs(divisor);
    unsigned int quotient = 0;
    while(absolute_dividend >= absolute_divisor)
    {
        unsigned int temp_divisor = absolute_divisor;
        unsigned int multiple=1;
        while((temp_divisor << 1) <= absolute_dividend)
        {
            temp_divisor = temp_divisor <<1;
            multiple = multiple <<1;

        }
        absolute_dividend = absolute_dividend - temp_divisor;
        quotient = quotient + multiple;
    }
    return sign * quotient;
}
int main()
{
    int dividend , divisor;
    printf("Enter dividend: ");
    scanf("%d",&dividend);
    printf("\n Enter divisor: ");
    scanf("%d",&divisor);
    printf("\n Quotient: %d",divide(dividend,divisor));
    return 0;
}
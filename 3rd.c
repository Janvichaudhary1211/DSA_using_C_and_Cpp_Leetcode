/*Bit Manipulation*/
/*Problem: To find whether a number is power if two*/
#include<stdio.h>
int main()
{
    int num, temp, flag=0;
    printf("Enter any integer number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=1)
    {
        if(temp%2!=0)
        {
            flag=1;
            break;
        }
        temp=temp/2;
    }
    if(flag==0)
    printf("\n %d is power of 2",num);
    else
    printf("\n %d is not power of 2",num);
    return 0;
}
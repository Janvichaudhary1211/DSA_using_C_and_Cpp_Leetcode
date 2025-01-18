/* Bit Manipulation*/
/* Problem: Calculate square of a number without using *,/ and pow()*/
#include<stdio.h>
int square(int n)
{
    int result = 0;
    //Add number to result n(value of number) times
    for(int i=0;i<n;i++)
    {
      result = result+n;
    }
    return result;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("\n Square of %d is: %d",n,square(n));
    return 0;
}
/* Bit Manipulation*/
/* Problem: Count number of bits to be flipped to convert A to B*/
#include<stdio.h>
int count_bits_to_flip(int a,int b)
{
    int xor= a^b;
    int count=0;
    while(xor){
        count = count+(xor & 1);
        xor = xor>>1;
    }
    return count;
}
int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("\n Enter the second number: ");
    scanf("%d",&b);
    printf("\n Number of bits to flip to convert %d to %d: %d\n",a,b,count_bits_to_flip(a,b));
    return 0;
}
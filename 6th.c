/* Bit Manipulation*/
/* Problem: Count total set bits in all numbers from 1 to n*/
#include<stdio.h>
int count_set_bits_in_number(int num)
{
    int count=0;
    while(num>0){
        count = count +(num & 1);
        num = num >> 1;
    }
    return count;
}
int count_total_set_bits(int n)
{
    int total_count=0;
    for(int i=1; i<=n; i++)
    {
        total_count = total_count + count_set_bits_in_number(i);
    }
    return total_count;
}
int main()
{
    int n;
    printf("Enter the upper limit: ");
    scanf("%d",&n);
    printf("\n Total set bits from 1 to %d: %d",n,count_total_set_bits(n));
    return 0;
}
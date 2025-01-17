/*Bit manipulation*/
/*Problem: Count set bits in an integer*/
#include<stdio.h>
int count_set_bit(int data)
{
    int count=0;
    while(data>0)
    {
        if((data&1)==1)
        count++;
        data=data>>1;
    }
    return count;
}
int main(){
    int no_set_bits,number;
    printf("Enter the number for which you want to count set bits: ");
    scanf("%d",&number);
    no_set_bits= count_set_bit(number);
    printf("\n Total number of set bits : %d",no_set_bits);
    return 0;
}
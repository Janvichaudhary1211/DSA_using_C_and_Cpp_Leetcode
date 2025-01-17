/*Bit Manipulation*/
/*Problem: To find position of the only set bit*/
/* Solution approach: The number having only 1 set bit and other bits zero are the 
power of 2*/
#include<stdio.h>
int find_position_set_bit(int num)
{
    if(num <0 || (num &(num -1)!=0))
    {
        return -1;  //Number is not valid
    }
    int position =1;
    while((num &1)==0)
    {
        num = num >> 1;
        position ++;
    }
    return position;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int pos = find_position_set_bit(n);
    if(pos == -1)
       printf("\nThe number do not have exactly 1 set bit");
    else 
       printf("\n The position of the only set bit is: %d",pos);
    return 0;
}
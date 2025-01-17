/*Bit Manipulation*/
/*Problem: Find the two non-repeating elements in an array of repeating elements*/
#include<stdio.h>
void find_two_non_repeating(int arr[],int n)
{
    int xor=0;   //To store xor of all values in array
    int x=0;
    int y=0;    //To store two non repeating values
    int set_bit;
    for(int i=0;i<n;i++)
    {
        xor=xor^arr[i];  //To get xor of all elements
    }
    set_bit = xor & ~(xor-1); //To find rightmost set bit
    for(int i=0;i<n;i++)
    {
        if(arr[i] & set_bit){
            x= x^arr[i];
        }
        else{
            y= y^arr[i];
        }
    }
    printf("The two non-repeating elements are : %d and %d",x,y);
}
int main(){
    int arr[] ={2,4,11,13,2,4,9,7,9,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    find_two_non_repeating(arr,n);
    return 0;
}

/* Hollow hourglass pattern for n=5*/
#include<stdio.h>
int main()
{
    char i=9,outer_flag=0,space=0;
    while(i!=11)     //Outer loop
    {
        for(char j=1; j<=space; j++)     //To print spaces
        printf(" "); 
        // For pattern
        for(char j=1; j<=i; j++) 
        {
            if(i==9)
            printf("%c",64+j);
            else if (j==1 || j==i)
            printf("%c",64+j);
            else
            printf(" ");
        }     
        printf("\n");
        if(i>1 && outer_flag==0){
        i=i-2;
        space++;
        }
        else{
        i=i+2;
        space--;
        }
        if(i==1)
        outer_flag=1;
    }
    return 0;
}
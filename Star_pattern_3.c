/* Draw the pattern for n=3 */
/* *
   **
   ***
      *
      **
      ***
         *
         **
         ***
   
*/ 
#include<stdio.h>
int main()
{
    int row=3, space=3;
    for(int star_block=0; star_block<3; star_block++){
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=star_block*space; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf("*");   
        }
        printf("\n");
    }
     }
    return 0;
}
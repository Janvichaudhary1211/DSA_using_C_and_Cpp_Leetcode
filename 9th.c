/* Bit Manipulation*/
/* Problem: Power set*/
#include<stdio.h>
#include<math.h>
void power_set(int set[],int n)
{
    int power_set_size = pow(2,n);
    for(int i=0; i<power_set_size; i++)
    {
        int first_element =1;
        printf("{");
        for(int j=0; j<n; j++)
        {
            if(i & (1 << j)){
                if(!first_element){
                    printf(",");
                }
                printf("%d",set[j]);
                first_element = 0;
            }
        }
        printf("}\n");
    }
}
int main(){
    int set[]={1,2,3};
    int n = sizeof(set)/sizeof(set[0]);
    printf("Powerset is: ");
    power_set(set,n);
    return 0;
}

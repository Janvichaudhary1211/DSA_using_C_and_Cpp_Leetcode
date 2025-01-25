/* Spiral Matrix for n=3 and size 5x5*/
#include<stdio.h>
void value_in_spiral_matrix(int n){
    int grid[n][n];  //grid of size nxn
    int value=1;     //Value from 1
    int start_row=n/2;
    int start_column=n/2;
    int column=start_column;
    int row=start_column;
    grid[row][column]=value++;
    int step_size=1;
    while(value<=n*n){
        // move right
        for(int i=0; i<step_size && value <=n*n; i++){
            column++;
            grid[row][column]=value++;
        }
        // move down
        for(int i=0; i<step_size && value<= n*n; i++)
        {
            row++;
            grid[row][column]=value++;
        }
        step_size++;
        // move left
        for(int i=0; i<step_size && value <=n*n; i++)
        {
            column--;
            grid[row][column]=value++;
        }
        // move up
        for(int i=0; i<step_size && value <=n*n; i++)
        {
            row--;
            grid[row][column]=value++;
        }
        step_size++;
        }
        // To print the grid
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                printf("%3d",grid[i][j]);
            }
            printf("\n");
        } 
    }
int main()
{
    int n=5;
    value_in_spiral_matrix(n);
    return 0;
}
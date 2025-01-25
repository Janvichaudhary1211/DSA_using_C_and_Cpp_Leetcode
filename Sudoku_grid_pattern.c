/* Soduko pattern for n=5 */
#include<stdio.h>
int main()
{
    int grid[9][9];
    int size=9;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            int minimum_distance=(i<j)?i:j;
            minimum_distance=(minimum_distance<size-1-i)?minimum_distance:size-1-i;
            minimum_distance=(minimum_distance<size-1-j)?minimum_distance:size-1-j;
            grid[i][j]=5-minimum_distance;
        }
    }
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf("%d",grid[i][j]);
        }
        printf("\n");
    }
    return 0;
}
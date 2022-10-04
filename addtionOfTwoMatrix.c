#include<stdio.h>
void main(){
    int first[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    int size_first = sizeof first / sizeof *first;
    int second[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    int size_second = sizeof second / sizeof *second;
    int sum[3][3];
    int size_sum = sizeof sum / sizeof *sum;
    for (int i = 0; i < size_first; i++)
    {
        for (int j = 0; j < size_second; j++)
        {
            sum[i][j] = first[i][j]+second[i][j];
        }
        
    }
    for (int i = 0; i < size_sum; i++)
    {
        for ( int j = 0; j < size_sum; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
        
    }
    

    
}
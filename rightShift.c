#include<stdio.h>
void main(){
    int shift = 2;
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof arr / sizeof *arr;
    if(shift>size){
        return;
    }
    int k = 0;
    int temp[6];
    for (int i = size-1; i > shift; i--)
    {
        temp[k] = arr[i];
        k++;
    }
    for (int j = 0; j <= shift; j++)
    {
        temp[k] = arr[j];
        k++;
    }
    int temp_size = sizeof temp / sizeof *temp;

    for (int k = 0; k < temp_size; k++)
    {
        printf("%d\t",temp[k]);
    }
    
    
    

    
}
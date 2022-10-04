#include<stdio.h>
void main(){
    int shift = 2;
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof arr / sizeof *arr;
    if(shift>size){
        return;
    }
    int k = 0;
    int temp[100];
    for (int i = shift; i < size; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (int j = 0; j < shift; j++)
    {
        temp[k] = arr[j];
        k++;
    }

    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
    
    

    
}
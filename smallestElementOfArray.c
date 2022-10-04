#include<stdio.h>
void main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof arr / sizeof *arr;
    int smallest = arr[0];
    for (int i = 1; i < size; i++)
    {
       if(smallest>arr[i]){
        smallest = arr[i];
       }
        
    }
    printf("smallest %d",smallest);
    
}
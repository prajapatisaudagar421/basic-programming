#include<stdio.h>
void main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof arr / sizeof *arr;
    for (int i = size-1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
    
}
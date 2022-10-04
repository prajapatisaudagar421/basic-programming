#include<stdio.h>
void main(){
int arr[] = {1,2,3,4,5,6};
int sum = 0;
    int size = sizeof arr / sizeof *arr;
    for (int i = 0; i < size; i++)
    {
        sum = sum+arr[i];
    }
    printf("sum %d",sum);

}

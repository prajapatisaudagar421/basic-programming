#include<stdio.h>
void main(){
    int arr1[] ={1,2,3,4,5,6};
    int size_arr1 = sizeof arr1 / sizeof *arr1;
    int arr2[] = {1,2,3,4,5,6,7};
    int size_arr2 = sizeof arr2 / sizeof *arr2;
    int sum1  = 0;
    int sum2 = 0;
    for (int i = 0; i < size_arr1; i++)
    {
       sum1 = sum1+arr1[i];
    }
    for (int i = 0; i < size_arr2; i++)
    {
        sum2 = sum2+arr2[i];
    }
    if(sum1>sum2){
        printf("array 1 is large sum");
    }else if(sum2>sum1){
        printf("array 2 is large sum");
    }else{
        printf("both array sum  are same");
    }
    
    

}
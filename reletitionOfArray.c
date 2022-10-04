#include<stdio.h>

void main(){
  int arr[] = {1,2,3,4,1,5,6};
    int size = sizeof arr / sizeof *arr;
    for (int i = 0; i < size; i++)
    {
       for (int j = i+1; j < size; j++)
       {
        if(arr[i] == arr[j]){
            printf(" repeted values is %d",arr[i]);
            return ;

        }
       }
       
    }  
    printf("not repeted elements");
    
}

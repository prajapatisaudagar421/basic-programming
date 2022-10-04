#include<stdio.h>
void largestOfTree(int num1, int num2, int num3);
void main(){
largestOfTree(10,2,4);
}
void largestOfTree(int num1, int num2, int num3){
    if(num1>num2){
        if (num1>num3)
        {
            printf("%d is large",num1);
        }else{
            printf("%d is large",num3);
        }
    }else if (num2>num3)
    {
        printf("%d is large",num2);
    }
    else{
         printf("%d is large",num3);
    }
    
}
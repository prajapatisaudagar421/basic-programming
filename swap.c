#include<stdio.h>
void swap(int num1, int num2);
void main(){
swap(5,6);
}
void swap(int num1, int  num2){
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
    printf("%d\t %d",num1,num2);
}
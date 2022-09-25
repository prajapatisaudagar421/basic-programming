#include<stdio.h>
void sumOfDigit(int num);
void main(){
sumOfDigit(1234);
}
void sumOfDigit(int num){
    int sum =0;
    while (num != 0)
    {
        int remender = num%10;
        sum = sum+remender;
        num = num/10;
    }
    printf("%d",sum);
}
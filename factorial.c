#include<stdio.h>
void factorial(int num);
void main(){
factorial(10);
}
void factorial(int num){
    int fact = 1;
    if(num<0){
        printf("factorial of a negative number doesn't exist");
    }else{
        for (int i = 1; i <= num; i++)
        {
            fact = fact*i;
        }
        printf("%d",fact);
        
    }
}
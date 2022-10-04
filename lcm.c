#include<stdio.h>
void lcmOfNumber(int num1, int num2);
void main(){
lcmOfNumber(10,2);
}
void lcmOfNumber(int num1,int num2){
    int MaxNUmber;
    MaxNUmber = (num1>num2)?num1:num2;
    while (1)
    {
        if (MaxNUmber%num1 == 0 && MaxNUmber%num2 == 0)
        {
            printf("lcm %d",MaxNUmber);
            break;
        }
        MaxNUmber++;
        
    }
    
}
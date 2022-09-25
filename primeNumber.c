#include<stdio.h>
void primeNumber(int num);
void main(){
primeNumber(4);
}
void primeNumber(int num){
    int flag = 0;
    for (int i = 2; i <= num/2; i++)
    {
        flag++;
        break;
    }
    if(flag == 1){
        printf("Not prime");
    }else{
        printf("prime");
    }
    
}
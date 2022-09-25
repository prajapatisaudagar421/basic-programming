#include<stdio.h>
void perfectSquare(int num);
void main(){
perfectSquare(100);
}
void perfectSquare(int num){
    for (int i = 1; i <= num; i++)
    {
        if(num == i*i){
            printf("perfect square");
            return;
        }
    }
    printf("not perfect square");
    
}
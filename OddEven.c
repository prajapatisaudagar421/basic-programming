#include<stdio.h>
void oddEven(int num);

void main(){
    oddEven(5);
}
void oddEven(int num){
    if(num%2== 0){
        printf("even");
    }else{
        printf("odd");
    }
}



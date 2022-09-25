#include<stdio.h>
void fibonacci(int num);
void main(){
fibonacci(5);
}
void fibonacci(int num){
    int n1 = 0, n2 =1, next =0;
    for (int i = 1; i <= num; i++)
    {
        printf("%d\t",n1);
        next = n1+n2;
        n1 = n2;
        n2 = next;
    }
    
}
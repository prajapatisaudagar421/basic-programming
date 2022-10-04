#include<stdio.h>
void gcdOfNumber(int num1, int num2);
void main(){
gcdOfNumber(5,10);
}
void gcdOfNumber(int num1, int num2){
    int i = 0;
    int gcd = 1;
    for ( i = 1; i <= num1, i<= num2; i++)
    {
        if(num1%i ==0 && num2%i == 0){
            gcd = i;
        }
    }
    printf(" gcd  = %d",gcd);
    
}
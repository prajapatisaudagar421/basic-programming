#include<stdio.h>
void palindrome(int num);
void main(){
 palindrome(101);
}
void palindrome(int num){
    int reverse = 0, n = num;
    while (num != 0)
    {
        int remender = num%10;
        reverse = reverse*10+remender;
        num= num/10;
    }
    if(n == reverse){
        printf("Yes");
    }else{
        printf("No");
    }
    
}
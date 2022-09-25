#include<stdio.h>
#include<math.h>
void binaryToDecimal(int num);
void main(){
binaryToDecimal(1000);
}
void binaryToDecimal(int num){
    int decNum = 0;
    int i = 0;
    while (num !=0)
    {
        int remender = num%10;
        decNum = decNum+remender*pow(2,i);
        num = num/10;
        i++;

    }
    printf("%d",decNum);
    
}
#include<stdio.h>
void decimalToBinary(int num);
void main(){
decimalToBinary(8);
}
void decimalToBinary(int num){
    int binary[32];
    int i =0;
    while (num != 0)
    {
        binary[i] = num%2;
        num = num/2;
        i++;
    }
    for (int j = i-1; j >= 0; j--)
    {
        printf("%d",binary[j]);
    }
    
    
}
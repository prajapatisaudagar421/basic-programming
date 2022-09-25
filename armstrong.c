#include<stdio.h>
#include<math.h>
void armstrong(int num);
void main(){
    armstrong(407);
}
void armstrong(int num){
    int n1 = num,n2 = num,count=0;
     double sum=0;
    while (n1 != 0)
    {
        count++;
        n1 = n1/10;
    }
    while (n2 != 0)
    {
        int remender = n2%10;
        sum =  sum+pow(remender,count);
        n2 = n2/10;
    }
    if(num == sum){
        printf("Yes");
    }else{
        printf("No");
    }
    
    
}
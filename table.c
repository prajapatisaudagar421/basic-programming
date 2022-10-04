#include<stdio.h>
void printtable(int num);
void main(){
printtable(2);
}
void printtable(int num){
    for (int i = 1; i <= 10; i++)
    {
        int mul = num*i;
        printf("%d  * %d  = %d\n",num,i,mul);
    }
    
}
#include<stdio.h>
void leapYear(int years);
void main(){
leapYear(2000);
}
void leapYear(int years){
    if(years%400 == 0 && years %100 == 0){
        printf("yes");
    }else if (years%4 == 0 && years%100 != 0)
    {
        printf("yes");
    }else{
        printf("No");
    }
    
}
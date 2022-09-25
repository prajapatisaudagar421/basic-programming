#include<stdio.h>
void calculateDaysWeeksAndYears(int days);
void main(){
calculateDaysWeeksAndYears(1201);
}
void calculateDaysWeeksAndYears(int days){
    int years = days/365;
    int weeks = (days%365)/7;
    int day = days-((years*365)+(weeks*7));
    printf("years %d\n",years);
    printf("weeks %d\n",weeks);
    printf("days %d\n",day);
}
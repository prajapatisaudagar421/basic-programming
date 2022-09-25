#include<stdio.h>
void fahrenheitToCelcius(int fahrenheit);
void celciusToFahrenheit(int celcius);
void main(){
fahrenheitToCelcius(98);
celciusToFahrenheit(36);
}
void fahrenheitToCelcius(int fahrenheit){
    float cecluis = (fahrenheit-32)*5/9;
    printf("%.3f\n",cecluis);
}
void celciusToFahrenheit(int celcius){
    float fahrenhiet= (celcius*9/5)+32;
    printf("%.3f",fahrenhiet);
}
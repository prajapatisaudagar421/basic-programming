#include<stdio.h>
#include<math.h>
void quardraticEquation(double a, double b, double c);
void main(){
quardraticEquation(2.3,2.4,2.5);
}
void quardraticEquation(double a, double b, double c){
    double root1,root2;
    double determinant = b*b-4*a*c;
    if(determinant>0){
        root1 = (-b+sqrt(determinant))/(2*a);
        root2 = (-b-sqrt(determinant))/(2*a);
        printf("root1 : %lf\n",root1);
        printf("root2 : %lf",root2);
    }else if(determinant == 0){
        root1 = root2 = -b/(2*a);
        printf("root1 = root2 = %lf",root1);
    }else{
        double real = -b/(2*a);
        double imaginary = sqrt(-determinant)/(2*a);
        printf("root1 %.2lf  %.2lf\n",real,imaginary);
        printf("root2 %.2lf  %.2lf",real,imaginary);
    }
}
#include<stdio.h>
void count(char line[150]);
void main(){
    char arr[150];
   scanf("%[^\n]",arr);
   count(arr);

}
void count(char line[150]){
    int alphabets = 0;
    int number = 0;
    int specialcharacter = 0;
    for (int i = 0; line[i] != '\0'; i++){
        if (line[i]>= 65 && line[i] <= 90 || line[i] >= 97 && line[i]<=122)
        {
            alphabets++;
        }else if (line[i] >= 48 && line[i] <= 57)
        {
            number++;
        }else{
            specialcharacter++;
        }
       
    }
     printf("alphabets %d\n",alphabets);
        printf("number %d\n",number);
        printf("specailcharcter %d",specialcharacter);
}
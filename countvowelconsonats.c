#include<stdio.h>
void countVowelConsonats(char line[150]);
void main(){
char arr[150];
scanf("%[^\n]",arr);
countVowelConsonats(arr);
}
void countVowelConsonats(char line[150]){
    int vowels =0,consonants =0, spaces = 0;
    for (int i = 0; line[i] != '\0'; i++)
    {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] =='u' ||
        line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] =='U')
        {
            vowels++;
        }else if(line[i] == ' '){
            spaces++;
        }
        else{
            consonants++;
        }
        
    }
    printf("vowels %d\n",vowels);
    printf("consonants %d\n",consonants);
    printf("spaces %d",spaces);
    
}
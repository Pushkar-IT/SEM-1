#include<stdio.h>
int main(){

char ch;
printf("Enter the character");
scanf("%c",&ch);

if(ch >='A' && ch <='Z'){
    printf("This is UPPER CASE");
    }else if (ch >= 'a' && ch <= 'z'){
        printf("This is lower case");
    } else {
        printf("Not english letter");
    } 
    return 0;

}
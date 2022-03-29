#include<stdio.h>

int main(){
    int c;
    printf("Enter the Digit:");
    scanf("%d",&c);

    if(c>=10 && c<<100){
        printf("It is a two digit Number");
    }
    else{
        printf("It is not a two digit Number");
    }
    return 0;
    }

#include<stdio.h>

int main(){
    int number;
    printf("Enter the Number:");
    scanf("%d",&number);

    if(number >= 0){
        printf("It is a positive number\n");
        if(number % 2 == 0) {
            printf("Even Number");
           } else{
                printf("Odd number");
            }

        } else{ 
            printf("It is a negative Number");
        }
        return 0;
}
    
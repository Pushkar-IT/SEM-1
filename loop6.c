#include<stdio.h>

int main(){
    int n;
    do{
    printf("Enter your number");
    scanf("%d",&n);

   printf("your entered number is %d\n", n);
        if(n % 2 != 0){
        break;
    } 
    }while(1); 
    printf("Pehli fursat me nikal");
return 0;
}
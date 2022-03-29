#include<stdio.h>

int main(){
    int a,b,c,avg;
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    printf("Enter the third number");
    scanf("%d",&c);
    avg=a+b+c/3;
    printf("Average of these numbers is:%d",avg);
    return 0;

}
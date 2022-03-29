#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the two numbers");
    scanf("%d,%d",&a,&b);
    printf("Smallest Number is:%d", a>b, b>a);
    return 0;
}
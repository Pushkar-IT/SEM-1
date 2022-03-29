#include<stdio.h>

int main(){
    int n,i,c;
    printf("Number daalo Bhai:-");
    scanf("%d",&n);
    for(  i=1; i <=n; i++){
        if(n % i == 0){
            c++;//count value
        }
    }
    if(c == 2){
        printf("n is prime number");
    }
    else{
        printf("n is not prime");
    }
    return 0;
}
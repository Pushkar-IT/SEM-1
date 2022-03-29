#include<stdio.h>

int main(){
    int i=5;
    int *ptr=&i;
    int **pptr=&ptr;
    int ***ppptr=&pptr;

    printf("%d\n", ***ppptr);        
}
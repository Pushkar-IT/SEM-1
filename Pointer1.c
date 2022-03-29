#include<stdio.h>

int main(){
    int age=25;
    int *ptr=&age;
    printf("%d\n",*(&age));
    printf("%u\n",&age);
    printf("%u\n", ptr);
    printf("%u\n",&ptr);
    return 0;
}
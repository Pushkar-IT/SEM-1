#include<stdio.h>

int main(){
    int marks[5];

    printf("Enter Physics Marks:");
    scanf("%d",&marks[0]);

    printf("Enter Chemistry Marks:");
    scanf("%d",&marks[1]);

    printf("Enter Mathematics Marks:");
    scanf("%d",&marks[2]);

    printf("Enter English Marks:");
    scanf("%d",&marks[3]);

    printf("Enter Drawing Marks:");
    scanf("%d",&marks[4]);

    printf("Physics= %d, Chemistry= %d, Mathematics= %d, English= %d, Drawing= %d", marks[0], marks[1], marks[2], marks[3], marks[4] );
    return 0;
}
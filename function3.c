#include<stdio.h>
#include<math.h>

float radius(float rad);

int main(){
    float rad=3;
    printf("Area of circle:%f",radius(rad));
    return 0;

}

float radius(float rad){
    return 3.14*rad*rad;
}
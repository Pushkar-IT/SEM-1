#include<stdio.h>

// function declaration
float findArea(float l, float b); 

int main()
{
  float length, width, result;

  printf("Enter the length and width of the rectangle: ");
  scanf("%f %f", &length, &width);

  result = findArea(length, width); //function callinge
  printf("Area of rectangle = %.2f\n",result);

  return 0;
}

// function to find ara of rectangle
// function definition
float findArea(float l, float b)
{
  float area;
  area = l * b;
  return area; //return statement
}
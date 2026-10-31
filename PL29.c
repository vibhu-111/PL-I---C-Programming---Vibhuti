/*
Program(29) -> Write a program to calculate the area of a triangle.
Solution(1) : No Arguments ; No return Value
*/

#include<stdio.h>


void areaTriangle()

{
    float base, height, area;

     float b, h;
    printf("Enter base :");
    scanf("%f", &b);
     printf("Enter height :");
    scanf("%f", &h);


    area = 0.5 * base * height;



    printf("Area of the Triangle = %f" ,area);
}

int main()

{
    areaTriangle();


    return 0;
}
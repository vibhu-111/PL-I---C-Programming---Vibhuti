/*
Program(8)-> Write a C program to swap two numbers without using a temporary variable.
Solution(2)-> User Defined Values
*/
#include<stdio.h>
int main()
{
    int a,b,temp;

    printf("Enter first number: ");
    scanf("%d",&a);
    
    printf("Enter second number: ");
    scanf("%d",&b);

    temp = a;
    a=b;
    b=temp;


    printf("\n After swapping: ");
    printf("\n First Number= %d",a);
    printf("\n Second Number= %d",b);

    return 0;
}
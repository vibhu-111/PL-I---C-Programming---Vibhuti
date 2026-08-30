/*
Program(2)-> Write a program to make use of basic I/O functions using user input.
Solution(2)-> User Input.
*/
#include <stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;

    printf("Enter Student Roll Number: ");
    scanf("%d", &rollnum);
    printf("Enter Student Percentage: ");
    scanf("%f", &per);
    printf("Enter Student Grade: ");
    scanf(" %c", &grade);

    printf("-----Student Information-----");
    printf("\n Roll Number: %d",rollnum);
    printf("\n Percentage:  %f",per);
    printf("\n Grade:    :  %c",grade);

    return 0;
}

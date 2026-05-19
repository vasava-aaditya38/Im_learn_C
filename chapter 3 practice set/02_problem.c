#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;

    printf("Eneter marks 1: ");         // out of 100 marks
    scanf("%d", &marks1);

    printf("Eneter marks 2: ");
    scanf("%d", &marks2);

    printf("Eneter marks 3: ");
    scanf("%d", &marks3);

    printf("The marks are %d %d and %d", marks1, marks2, marks3);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("\nYou are failed");
    }

    else if((marks1 + marks2 + marks3)/3 < 40)
    {
        printf("You failed due less percenetange");
    }

    else
    {
        printf("\nYou are passed");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int mark;
    printf("enter your mark: ");
    scanf("%d", &mark);

    if (mark <= 100 && mark >= 90)
    {
        printf("Your grade is A");
    }

    else if (mark <= 90 && mark >= 80)
    {
        printf("Your grade is B");
    }

    else if (mark <= 80 && mark >= 70)
    {
        printf("Your grade is C");
    }

    else if (mark <= 70 && mark >= 60)
    {
        printf("Your grade is D");
    }

    else if (mark <= 60 && mark >= 50)
    {
        printf("Your grade is E");
    }

    else if (mark <= 50)
    {
        printf("You are failed!\n");
        printf("Try again");
    }

    return 0;
}
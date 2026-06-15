#include <stdio.h>

int sum(int, int);

int sum(int x, int y)
{
    printf("The sum is %d", x + y);
    return x + y;
}

int main()
{
    sum(12, 8);     // Function Call

    return 0;
}

// #include <stdio.h>

// // Function prototype

// int sum(int, int);

// // Function defination

// int sum(int x, int y)
// {
//     printf("The sum is %d\n", x + y);
// }
// int main()
// {

//     int a = 5, b = 10;
//     // printf("The sum is %d",a+b);

//     sum(a, b);

//     int c = 5, d = 1;
//     // printf("The sum is %d",c+d);

//     sum(c, d);

//     return 0;
// }

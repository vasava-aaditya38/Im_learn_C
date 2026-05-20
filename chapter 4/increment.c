#include <stdio.h>

int main(){
    int i=5; // 5
    printf("The value of i is %d\n",i);

    i = i + 5; // 10
    printf("The value of i is %d\n",i);

    // i++; // 11
    printf("The value of i is %d\n",++i);

    i += 2;                      
    printf("The value of i is %d\n",i);
    return 0;
}

// i++ prints first and then increments (post increment oprators)
// ++1 increments first and then prints i (post increment oprators)

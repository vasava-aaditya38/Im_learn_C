
#include <stdio.h>

int main(){
    int i=10; // 10
    printf("The value of i is %d\n",i);

    i = i - 5; // 5
    printf("The value of i is %d\n",i);

    // i--; // 4
    printf("The value of i is %d\n",--i);

    i -= 2;                      
    printf("The value of i is %d\n",i);
    
    return 0;
}
// i-- prints first and then Decrement (post decrement oprators)
// --1 Decrement first and then prints i (post decrement oprators)
#include <stdio.h>

int main(){
    int i = 1;
    int product = 1;
    int n = 4;
    while(i<=n)
    {
        product*=i;
        i++;
    }
    printf("The factorial of 5 is %d",product);
    
    return 0;
}
#include <stdio.h>

int factorial(int);

int factorial(int n){

    if(n==1 || n==0){
        return 1;
    }
    return n * factorial (n-1);
}

int main(){
    int a;

    printf("Enter the value: ");
    scanf("%d",&a);

    printf("The factorial of %d is %d",a,factorial(a));
    
    return 0;
}
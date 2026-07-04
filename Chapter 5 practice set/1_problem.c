#include <stdio.h>

float avarage(int,int,int);

float avarage(int a ,int b ,int c){

    return (a + b + c)/3.0;
}


int main(){
    int a,b,c;

    printf("Enter the A: ");
    scanf("%d",&a)
    ;
    printf("Enter the B: ");
    scanf("%d",&b);
    
    printf("Enter the C: ");
    scanf("%d",&c);

    printf("The avarage of %d and %d and %d is: %0.2f",a,b,c,avarage(a,b,c));
    return 0;
}
// #include <stdio.h>

// int main(){
//     float p=37.0;
//     int r=18;
//     int t=5;

//     printf("The value of simple intrest is: %f",(p*r*t)/100);
//     return 0;
// }

#include <stdio.h>

int main(){
    float p,simple_intrest;
    int r,t;

    printf("Enter your price: ");
    scanf("%f",&p);

    printf("Enter your rate: ");
    scanf("%d",&r);

    printf("Enter your time: ");
    scanf("%d",&t);

   simple_intrest = (p * r * r) /100;

    printf("simple intrest is: %.2f",simple_intrest);
    return 0;
}

#include <stdio.h>

float fahrenheit(float);

float fahrenheit(float c){
    return (9.0/5.0 * c ) + 32;
}

int main(){
    float celsius;
    printf("Enter Temparature into celsisus: ");
    scanf("%f",&celsius);

    printf("%0.2f celsisus = %0.2f Fahrenheit",celsius,fahrenheit(celsius));
    return 0;
}


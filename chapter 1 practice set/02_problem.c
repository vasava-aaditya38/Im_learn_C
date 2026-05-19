#include <stdio.h>

int main(){
    int r;
    int height;

    printf("Enter the redius: ");
    scanf("%d",&r);

    printf("Enter the height: ");
    scanf("%d",&height);

    printf("The area of cirle with redius is %d is: %f\n",r,3.14*r*r);
    printf("The volum of sylinder with redius is %d and height %d is: %f\n",r,height,3.14*r*r*height);
    return 0;
}
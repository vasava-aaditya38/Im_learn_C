#include <stdio.h>

int main(){
    // int a =23155;
    int a =3349895;
    printf("The value of a%97 is %d\n",a%97);

    if(a%97==0)
    {
        printf("This value is divisble");
    }
    else{
        printf("Thsi value is not divisble");
    }
    return 0;
  
}
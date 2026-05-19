#include <stdio.h>

int main(){
    char c='A';     // Capital character value is different

    printf("The character is %c\n",c);
    printf("The character value is %d\n",c);

    // assic value: 97,122

    if(c>=97 || c<=122){
        printf("This is lowercase value\n");
    }
    else{
        printf("This is not lowercase value!");
    }
    return 0;
}
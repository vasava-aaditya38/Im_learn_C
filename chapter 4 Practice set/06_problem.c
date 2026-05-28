#include <stdio.h>

int main(){
    int i = 1;
    int sum = 0;

    do{   
        sum += i;
        i++;
    }
        while (i<=10);

    // USING FOR LOOP

    for (i = 1; i <=10; i++)
    {
        sum+=i;
    }
    
    printf("Tha sum of first 10 natural number is %d",sum);
    
    return 0;
}   
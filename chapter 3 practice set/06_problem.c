#include <stdio.h>

int main(){
    int v1,v2,v3,v4;

    printf("Enter value 1: ");
    scanf("%d",&v1);
    
    printf("Enter value 2: ");
    scanf("%d",&v2);

    printf("Enter value 3: ");
    scanf("%d",&v3);

    printf("Enter value 4: ");
    scanf("%d",&v4);

    if(v1>v2 && v1>v3 && v1>v4){
        printf("Value 1 is greatest");
    }

    else if(v2>v1 && v2>v3 && v2>v4){
        printf("Value 2 is greatest");
    }

    else if(v3>v1 && v3>v2 && v3>v4){
        printf("Value 3 is greatest");
    }

    else if(v4>v1 && v4>v2 && v4>v3){
        printf("Value 4 is greatest");
    }

    else{
        printf("Something went wrong!");
    }
    return 0;
}
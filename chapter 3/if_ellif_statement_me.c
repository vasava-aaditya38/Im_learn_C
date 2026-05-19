#include <stdio.h>

int main(){
    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);

    if(marks>=99){
        printf("You are genius");
    }

    else if (marks<25){
        printf("You are failed");
        printf("Don't give up");
    }

    else{
        printf("You are passed");
    }
   
    return 0;

    
}

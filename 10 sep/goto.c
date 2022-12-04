#include<stdio.h>
int main(){
    int score;
    pass:
    printf("\nenter a score:");
    scanf("%d", &score);
    if(score<50){
        printf("you are not pass");
    goto pass;
    }
    else{
         printf("you are PASS");
    }
    return 0;
}

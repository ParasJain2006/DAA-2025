#include <stdio.h>
int main(){
    int input;
    printf("enter the number: ");
    scanf("%d",&input);
    float var=input/2.0;
    if(var-(int)var==0){
        printf("even");
    }
    else{
        printf("odd");
    }
}
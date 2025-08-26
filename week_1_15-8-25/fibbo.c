#include<stdio.h>
void fibbo(int i){
    if(i==0 || i==1) {
        printf("%d",i);
        return;}
    printf("%d",(i-1)+(i-2));
}
int main(){
    int in=5;
    for(int i=0;i<in;i++){
        fibbo(i);
    }
}
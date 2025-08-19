#include<stdio.h>
#include <math.h> 
int main(){
    int num;
    printf("\n Enter your number ...");
    scanf("%d",&num);

    int temp=num;
    int digits=0;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    int sum=0;
    temp = num;
    while(temp>0){
       int d=temp%10;
       sum=sum+(int)pow(d,digits);
       temp=temp/10;

    }
    printf("%d",sum);
    if (sum == num)printf("yes");
    else printf("no");
    return 0;
}
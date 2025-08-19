#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int rotate;
    int n=sizeof(arr) / sizeof(arr[0]);
    printf("\n Enter your number ...");
    scanf("%d",&rotate);
    rotate=rotate%n;
    for(int i=0;i<rotate;i++){
        int temp=arr[i];
        arr[i]=arr[(i+rotate)%n];
        arr[(i+rotate)%n]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
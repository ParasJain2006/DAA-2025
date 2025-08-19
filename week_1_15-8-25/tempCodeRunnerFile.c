#include<stdio.h>
int main(){
    int arr[5]={1,4,3,2,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i =0;i<n-1;i++){
        for(int j =0;j<n-i-1;j++){
        int swap=0;
            if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            swap=1;
            }
            if(swap==0) break;
        }
    }
    for(int x =0;x<n;x++){
        printf("%d",arr[x]);
    }
}
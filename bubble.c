#include<stdio.h>
int main(){
    int arr[]={9,7,5,3,8};
    int size=5;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int k=0;k<size;k++){
        printf("%d",arr[k]);
    }
    return 0;
}
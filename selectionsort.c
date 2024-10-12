#include<stdio.h>
int main(){
    int arr[]={2,3,1,5,6};
    int size=5;
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    for(int k=0;k<size;k++)
    {
        printf(" %d ",arr[k]);
    }
    return 0;
}
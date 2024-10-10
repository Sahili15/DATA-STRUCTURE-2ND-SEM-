#include<stdio.h>
int linearsearch(int arr[],int target,int size){
    for(int i=0;i<size;i++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int target=4;
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=linearsearch(arr,target,size);
    if(result!=-1){
        printf("element found at %d index ",result);
    }
    else{
        printf("element not found ");
    }
    return 0;
}
#include<stdio.h>
int binarysearch(int arr[],int key,int size){
    int start =0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(key==arr[mid]){
           return mid;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={5,3,6,2,8,9,12};
    int key=2;
    int size=sizeof(arr)/sizeof(arr[0]);
    int indexfound=binarysearch(arr,key,size);
    if(indexfound==-1){
        printf("element not found");
    }
    else{
        printf("element %d found at %d index",key,indexfound);
    }
    return 0;
}
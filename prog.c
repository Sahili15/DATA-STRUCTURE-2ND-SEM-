#include<stdio.h>
int linear_search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=50;
    int  result=linear_search(arr,n,key);
    if(result!=-1){
        printf("element found at index %d\n");
    }
    else {
        printf("element not found\n") ;
    }
    return 0;
    
}

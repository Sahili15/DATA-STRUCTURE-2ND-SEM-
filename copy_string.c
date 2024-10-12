#include<stdio.h>
int main(){
    char src[]="hello";
    char dest[100];
    int i;
    for(i=0;src[i]!='\0';i++){
        dest[i]=src[i];
    }
    dest[i]='\0';
    printf("copied string:%s\n",dest);
    return 0;
}
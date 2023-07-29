#include<stdio.h>

int main(){
    int arr[]={12,4,76,89,8,34,56};
    int search;
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Please Inter The Seach Element : ");
    scanf("%d",&search);
    int i;
    for(i=0; i<n; i++){
        if(search == arr[i]){
            printf("Element Present at %d Position. ",i+1);
            break;
        }
    }
    if(i==n){
        printf("Element is NOt Present Int this Arrray ");
    }


    return 0;
}
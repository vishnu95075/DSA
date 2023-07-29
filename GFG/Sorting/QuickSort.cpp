#include<stdio.h>
int partition(int arr[],int l, int n){
    int pivoit = arr[n];
    if(l<n){
            
    }
}


void quickSort(int arr[], int l, int n){
    while(l<n){
        int part = partition(arr,l,n);
        quickSort(arr,l,part-1);
        quickSort(arr,part+1,n); 
    }
        

}

int main(){
    int arr[] = {23,45,67,34,12,12,34,45,65,34,23,45,78,90};
    int n =  sizeof(arr)/sizeof(arr[0]);

    printf("Given array is : ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    } 

    quickSort(arr,0,n-1);

    printf("Sorted array is : ");

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    } 
    return 0;
}
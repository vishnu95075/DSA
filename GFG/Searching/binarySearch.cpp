#include<stdio.h>

int binarySearch(int arr[], int l, int r, int x){

    while (l <= r) {
        int m = l + (r - l) / 2;
 
        
        if (arr[m] == x)
            return m;
 
       
        if (arr[m] < x)
            l = m + 1;
 
        
        else
            r = m - 1;
    }
 
   
    return -1;
}
int main(){
    int arr[]={1,4,7,29,30,34,56};
    int search;
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Please Inter The Seach Element : ");
    scanf("%d",&search);
    
    int pos=binarySearch(arr,0,n-1,search);
    if(pos != -1 )
        printf("\n \n Postion is %d ",pos);
    else
        printf("Number is present ");

    return 0;
}
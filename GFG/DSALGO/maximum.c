#include<stdio.h>

int main(){

    int i, a[11];

printf("Inter the : ");
    for(i=0; i<10; i++){
        scanf("%d ",&a[i]);
    }

    for(i=0; i<10; i++){
        printf("%d ",a[i]);
    }

    return 0;
}
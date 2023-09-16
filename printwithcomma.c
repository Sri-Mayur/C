#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sol(int n, int arr[]){

        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                printf("%d",arr[i]);
                printf(" ,");
         
    }   
        }
}

int main() {

  int n;
  printf("Enter the length:");
    scanf("%d",&n);

    int arr[n],i,count=0;
    char ch;
    for(i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);   
    }

    sol(n,arr);

    return 0;
}
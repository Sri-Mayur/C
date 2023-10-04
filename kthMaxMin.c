

// Find kth max and min element of an array
// Set-14


#include <stdio.h>


//Initialized a void function (function with arguments and no return value).
void kth(int arr[],int n, int k){
    int temp=0;
    
    //Carried out Bubble Sort algorithm.
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    //Printing kth minimum and kth maximum values.
    printf("kth Maximum:%d\n",arr[n-k]);
    printf("kth Minimum:%d\n",arr[k-1]);
    
}


int main(){
    
    //Initialiazing an array of sufficient size and variable integers k and n.
    int arr[100],k,n;
    
    //Printing the statement and taking value of n in the register.
    printf("Enter the no. of elements in the array:");
    scanf("%d",&n);
    
    //Initialized a for loop to store the values of arr of each index.
    for(int i=0 ;  i<n; i++){
        printf("Enter the Element%d:",i+1);
        scanf("%d",&arr[i]);
    }
    
    //Printing the statement and taking the value of k in the register.
    printf("Enter the value of k:");
    scanf("%d",&k);
    
    
    //Called a function 'kth' by value.
    kth(arr,n,k);
  
    
    return 0;
    
}
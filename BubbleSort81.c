#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print(int n, int a[100]){

    int temp=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        if(i==n-1){
            continue;
        }
        
        else{
            
            for(int i=0; i<n;i++){
                printf("%d  ",a[i]);
            }
            printf("\n");
            
        }
        
    }
    

}

int main() {
    int n, a[100];
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){

        scanf("%d",&a[i]);
    }

    print(n, a);
    return 0;
}

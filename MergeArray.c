#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void merge(int n, int m, int a[], int b[]){
    int temp=0, c[100];

    for(int i=0;i<n;i++){
        c[i]=a[i];
    }

    for(int i=0; i<n+m; i++){
        c[i+n]=b[i];
    }

    for(int i=0; i<n+m; i++){
        printf("%d ",c[i]);
    }

}

int main() {

    int a[100],b[100];
    int n,m;

    printf("Enter the size of Array1:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter the element%d: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter the size of Array2:");
    scanf("%d",&m);

    for(int i=0;i<m;i++){
        printf("Enter the element%d: ",i+1);
        scanf("%d",&b[i]);
    }

    merge(n,m,a,b);
    

    
    return 0;
}
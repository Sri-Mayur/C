#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void input(int n, int a[100]){

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }

}

void sol(int n, int a[100]){

    int rev[100], j=0;

    for(int i=n-1;i>=0;i--){
        rev[j]=a[i];
        j++;
    }

    for(int i=0; i<n;i++){
        a[i]=rev[i];
    }
}

void output(int n,int a[100]){

    for(int i=0;i<n;i++){

        printf("%d",a[i]);
    }
}

int main() {

    int a[100],n;
    scanf("%d",&n);

    input(n,a);
    sol(n,a);
    output(n,a);
     return 0;
}

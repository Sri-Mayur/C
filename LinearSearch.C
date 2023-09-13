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
    int x;
    scanf("%d", &x);

    int found = 0;  

    for(int i = 0; i < n; i++){
        if(a[i] == x){
            printf("%d", i);
            found = 1;  
            break;      
        }
    }

    if (found==0) {
        printf("-1");  
    }
}




int main() {
    int n, a[100];
    scanf("%d", &n);

    input(n,a);
    sol(n,a);

    return 0;
}

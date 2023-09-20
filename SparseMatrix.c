#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print(int n, int m, int a[100][100]){
    int c = 0;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != 0){
                c++;
            }
        }
    }
    printf("%d %d %d\n", m, n, c); 

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != 0){
                printf("%d %d %d\n", i, j, a[i][j]); 
            }
        }
    }
}


int main() {
    int n, m, a[100][100];
    scanf("%d",&m);
    scanf("%d",&n);
    
    for(int i=0;i<m;i++){
        for(int j=0; j<n;j++){
            scanf("%d",&a[i][j]);

        }

        
    }

    print(n, m, a);
    return 0;
}
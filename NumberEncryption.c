#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// R=Right  L=Left  T=Increase   D=Decrease  S(n)=Swap by nth position

void operation(char *a, char *b){

    int traverse=0;

    for(int i=0;i<srtlen(b)-1;i++){

        if(b[i]=='R'){
            traverse++;
        }

    }

}

int main() {
    char a[100],b[100];
    scanf("%s",a);
    scanf("%s",b);

    operation(a,b);
    
    return 0;
}
#include <stdio.h>

void diff(int n, int p[]){

    int cap_index = 0;  
    int iron_index = n - 1;  
    long long cap = 0, iron = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cap += p[cap_index];
            cap_index++;
        } else {
            iron += p[iron_index];
            iron_index--;
        }
    }

    long long power_diff = cap - iron;

    printf("%lld\n", power_diff);
}

int main() {
    int n;
    scanf("%d", &n);
    int p[1000000];  

    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    diff(n,p);
    return 0;
}
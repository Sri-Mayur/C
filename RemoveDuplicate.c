#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, a[100];
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Loop to compare and mark duplicates as -1
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                a[j] = -1;
            }
        }
    }

    // Loop to print unique elements (those not marked as -1)
    for (int i = 0; i < n; i++) {
        if (a[i] != -1) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}

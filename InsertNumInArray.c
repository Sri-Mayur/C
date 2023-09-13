#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void input(int n, int a[100]);
void insert(int n, int a[100]);

int main() {
    int n, a[100];

    scanf("%d", &n);

    input(n, a);
    insert(n, a);
    
    return 0;
}

void input(int n, int a[100]) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void insert(int n, int a[100]) {
    int x;
    scanf("%d", &x);

    // Shift elements to the right to make space for the new element
    for (int i = n - 1; i >= 0; i--) {
        a[i + 1] = a[i];
    }

    a[0] = x;

    for (int i = 0; i < n + 1; i++) {
        printf("%d ", a[i]);
    }
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int binary(int a[], int x, int low, int high) {
int c=0;
  while (low <= high) {
    c++;
    int mid = low + (high - low) / 2;

    if (a[mid] == x)
      return mid;

    if (a[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }


  return c;

}

int main(void) {
  int a[100],n,x;
  scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d",&x);
  int result = binary(a, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("%d", result+1);
  return 0;
}

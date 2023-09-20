#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;

        for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	}
}


	



int main()
{
	int arr[100], n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Element%d:",i+1);
        scanf("%d",&arr[i]);
    }

	insertionSort(arr, n);

	return 0;
}

#include <stdio.h>

int main() {
	int arr[100];
	int i;
	for (int i = 0; i < 100; i++) {
		arr[i] = i * i;
    printf("%d\n", arr[i]);
	}

	printf("\n");

	int arrayAdd(int *arr, int s, int n) {
		for (int i = 0; i < 100; i++) {
			arr[i] = arr[i] + n;
      printf("%d\n", arr[i]);
		}
	}

  arrayAdd(arr, 100, 2);
}

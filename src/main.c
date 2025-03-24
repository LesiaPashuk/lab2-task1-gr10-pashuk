#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
		if(argc < 2) {
				printf("Usage: %s <size>\n", argv[0]);
				return 1;
		}

		int size = atoi(argv[1]);
		int arr[size];

		// Генерация массива
		printf("Generated array:\n");
		for(int i = 0; i < size; i++) {
				arr[i] = rand() % 100;
				printf("%d ", arr[i]);
		}
		printf("\n");

		// Ваша логика обработки

		return 0;
}
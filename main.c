#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        arr[i] = 1 + rand() % 100;
    }
    printf("Array prima dell'inversione:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        int temp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
    }
    printf("Array dopo l'inversione:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

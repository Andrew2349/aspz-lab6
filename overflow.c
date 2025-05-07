#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = malloc(5 * sizeof(int));

    if (arr == NULL) {
        perror("malloc failed");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        arr[i] = i * 10;
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr);
    return 0;
}


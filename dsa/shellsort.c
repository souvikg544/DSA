#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void shell(int a[], int n) {
    for (int gap = n / 2; gap >= 1; gap /= 2) {
        for (int j = gap; j < n; j++) {
            for (int i = j - gap; i >= 0; i -= gap) {
                if (a[i + gap] > a[i]) {
                    break;
                } else {
                    swap(&a[i + gap], &a[i]);
                }
            }
        }
    }
}

int main() {
    int a[30];
    int k, n;

    printf("Enter total number of elements: ");
    scanf("%d", &n);

    printf("\nEnter %d values: ", n);
    for (k = 0; k < n; k++) {
        scanf("%d", &a[k]);
    }

    shell(a, n);

    printf("\nArray after sorting: ");
    for (k = 0; k < n; k++) {
        printf("%d ", a[k]);
    }

    return 0;
}


// op 9
// 23 29 15 19 3 7 9 5 2

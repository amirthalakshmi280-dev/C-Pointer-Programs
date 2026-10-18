
#include <stdio.h>

int main() {
    int a[100], n, i;
    int *p, max, min;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size\n");
        return 1;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    p = a;
    max = min = *p;

    for (p = a + 1; p < a + n; p++) {
        if (*p > max) {
            max = *p;
        }

        if (*p < min) {
            min = *p;
        }
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
Enter array size: 5
Enter array elements: 12 5 30 8 2
Maximum element: 30
Minimum element: 2

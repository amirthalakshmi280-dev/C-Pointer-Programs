
#include <stdio.h>

int main() {
    int a[100], n, i, temp;
    int *start, *end;

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

    start = a;
    end = a + n - 1;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(a + i));
    }

    printf("\n");
    return 0;
}
Enter array size: 5
Enter array elements: 1 2 3 4 5
Reversed array: 5 4 3 2 1

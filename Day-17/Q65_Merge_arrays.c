//merge arrays
#include <stdio.h>

int main() {
    int n1, n2,a[100],b[100];

    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    printf("Enter %d elements: ", n1);
    for (int i = 0; i < n1; i++) scanf("%d", &a[i]);

    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    printf("Enter %d elements: ", n2);
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);

    // Merge
    int r[n1 + n2];
    for (int i = 0; i < n1; i++) r[i] = a[i];
    for (int i = 0; i < n2; i++) r[n1 + i] = b[i];

    // Print
    printf("\nMerged array: ");
    for (int i = 0; i < n1 + n2; i++) printf("%d ", r[i]);
    printf("\n");
    return 0;
}
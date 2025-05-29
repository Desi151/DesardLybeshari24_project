#include <stdio.h>

// Function to find the first and second maximum values
void max12(float a[], int n, float *max1, float *max2) {
    if (a[0] > a[1]) {
        *max1 = a[0];
        *max2 = a[1];
    } else {
        *max1 = a[1];
        *max2 = a[0];
    }

    for (int i = 2; i < n; i++) {
        if (a[i] > *max1) {
            *max2 = *max1;
            *max1 = a[i];
        } else if (a[i] > *max2) {
            *max2 = a[i];
        }
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }

    float arr[n];
    printf("Enter %d float numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    float max1, max2;
    max12(arr, n, &max1, &max2);  // Call to max12 to find first and second max

    printf("First Maximum = %.2f\n", max1);
    printf("Second Maximum = %.2f\n", max2);

    return 0;
}

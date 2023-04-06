#include <stdio.h>

int binarySearch(int arr[], int left, int right, int x)
{
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            left = mid + 1;

        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    int n, x, result;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the number to search: ");
    scanf("%d", &x);

    result = binarySearch(arr, 0, n - 1, x);

    if (result == -1)
        printf("Element not found in array");
    else
        printf("Element found at index %d", result);

    return 0;
}

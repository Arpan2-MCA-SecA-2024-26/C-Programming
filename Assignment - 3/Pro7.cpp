//7. Write a program to find the smallest and the largest elements in an array.

#include <stdio.h>
int main() 
{
	printf("**Program to find the smallest and largest elements in an array**\n");
    printf("Name: Arpan Malakar, Class: MCA1A, Roll: 14\n");
    int n, i, min, max;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    min = max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Smallest element: %d\n", min);
    printf("Largest element: %d\n", max);
    return 0;
}

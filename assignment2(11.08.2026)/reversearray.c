/*C program to reverse an array*/

#include <stdio.h>
int main()
{
    int a[100], n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Reverse array is:\n");
    for(i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);
        return 0;
}
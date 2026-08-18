/*Copy the elements of one array into another array*/

#include <stdio.h>
int main()
{
    int a[100], b[100], n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++)
        b[i] = a[i];
    printf("Elements of second array are:\n");
    for(i = 0; i < n; i++)
        printf("%d ", b[i]);
    return 0;
}
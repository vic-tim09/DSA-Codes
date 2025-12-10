// Dynamic memomry allocation in C .

#include <stdio.h>
#include <stdlib.h>                // heade file for malloc () , free()
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);

    // Dynamic / heap memmory allocation using new
    int *arr = (int *) malloc(n * sizeof(int));  // can skip (int*) in c .

    if (arr == NULL)
    {

        printf("Memory allocation is faild !\n");
        return 1;
    }

    printf("Enter the element of array:\n");
    // user input array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // print the all elements:
    printf("All the element of array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i], "\n");
    }
    // Free memory
    free(arr);

    return 0;
}
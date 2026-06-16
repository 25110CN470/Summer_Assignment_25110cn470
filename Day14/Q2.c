#include <stdio.h>

int main()
{
    int n, arr[100], key, i, count = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
            count++;
    }

    printf("Frequency = %d", count);

    return 0;
}
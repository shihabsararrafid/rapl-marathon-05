#include <stdio.h>
#include <math.h>
#include <stdlib.h>
long int getMinDiff(long int arr[], long int size, long int minDif, long int i)
{
    // base case
    if (i == size - 1)
    {
        return minDif;
    }
    else
    {
        if (arr[i] < minDif)
        {
            minDif = arr[i];
            return getMinDiff(arr, size, minDif, i + 1);
        }
        return getMinDiff(arr, size, minDif, i + 1);
    }

    // recursive case
    // long int newMin = abs(arr[i] -)
}
int main()
{
    long int n;
    while (scanf("%ld", &n) != EOF)
    {
        // scanf("%d", &n);
        long int arr[n + 5], i;
        for (i = 0; i < n; i++)
        {
            scanf("%ld", &arr[i]);
        }

        long int minCase = (n - 1);
        long int min;
        long int arr2[minCase + 20];
        // int k = 0;
        for (i = 0; i < minCase - 1; i++)
        {
            // for (int j = i + 1; j < n; j++)
            // {
            min = abs(arr[i] - arr[i + 1]);
            arr2[i] = min;
            // k++;
            // long int res = getMinDiff(min, 0);
            // }
        }
        // for (int k = 0; k < minCase; k++)
        // {
        //     printf("%ld\n", arr2[k]);
        // }
        long int res = getMinDiff(arr2, minCase, arr2[0], 0);
        printf("%ld\n", res);
    }
    return 0;
}
// long int min = abs(arr[0] - arr[1]);

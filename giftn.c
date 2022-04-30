#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long int subset[1048600];
long long int subsetSum[1048600];
long long int k = 0;
long int arraySize;
void getSubset(long int arr[], int currentIndex, int iteraionCount)
{
    if (iteraionCount == arraySize)
    {
        long long int sum = 0;
        for (int i = 0; i < currentIndex; i++)
        {
            // printf("%d ", subset[i]);
            sum += subset[i];
        }
        // printf("%lld ", sum);
        subsetSum[k] = sum;
        k++;
        return;
    }
    getSubset(arr, currentIndex, iteraionCount + 1);
    subset[currentIndex] = arr[iteraionCount];
    getSubset(arr, currentIndex + 1, iteraionCount + 1);
}
int main()
{
    int n;
    scanf("%ld", &n);
    arraySize = n;
    long int arr[n + 5];
    int i, j;
    for (i = 0; i < n; i++)
    {
        scanf("%ld", &arr[i]);
    }
    // long long int subsetSumSize =
    long long int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    getSubset(arr, 0, 0);
    // for (i = 0; i < pow(2, n); i++)
    // {
    //     printf("\n%lld ", subsetSum[i]);
    // }
    // long int min = abs(subsetSum[0] - subsetSum[1]);
    // for (i = 0; i < pow(2, n) - 1; i++)
    // {
    //     for (j = i + 1; j < pow(2, n); j++)
    //     {
    //         long int diff = abs(subsetSum[i] - subsetSum[j]);
    //         if (diff < min)
    //         {
    //             min = diff;
    //         }
    //         // printf("%ld\n", diff);
    //     }
    // }
    long long int min = abs(sum - subsetSum[0] - subsetSum[0]);
    for (i = 0; i < pow(2, n); i++)
    {
        long long int anotherSum = sum - subsetSum[i];
        long long int diff = abs(anotherSum - subsetSum[i]);
        if (diff < min)
        {
            min = diff;
        }
        // printf("%lld ", subsetSum[i]);
        // printf("%lld \n", diff);
    }
    printf("%lld\n", min);
    return 0;
}
#include <stdio.h>
int subset[1048600];
int arraySize;
void getSubset(long int arr[], int currentIndex, int iteraionCount)
{
    if (iteraionCount == arraySize)
    {
        for (int i = 0; i < currentIndex; i++)
        {
            printf("%d ", subset[i]);
        }
        printf("\n");
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
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%ld", &arr[i]);
    }
    getSubset(arr, 0, 0);
    return 0;
}
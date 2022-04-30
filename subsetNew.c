#include <stdio.h>

int arraySize;
long int subset[1048600];
long int k;
int flag = 0;
void generateSubset(int arr[], int startIndex, int iterationTime)
{
    // base case
    if (iterationTime == arraySize)
    {
        long int sum = 0;
        for (long int i = 0; i < startIndex; i++)
        {
            // printf("%d ", subset[i]);
            sum += subset[i];
        }
        if (sum == k)
        {
            flag = 1;
        }
        // else
        // {
        //     flag = 0;
        //     // printf("no\n");
        // }
        // printf(" sum of subset :%ld", sum);
        // printf("\n");
        return;
    }
    // recursive case
    generateSubset(arr, startIndex, iterationTime + 1);
    subset[startIndex] = arr[iterationTime];
    generateSubset(arr, startIndex + 1, iterationTime + 1);
}
int main()
{
    int n;

    scanf("%d %ld", &n, &k);
    arraySize = n;
    int arr[n + 5];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", arr[i]);
    // }
    // int arr[5] = {1, 2, 3, 4, 5};
    generateSubset(arr, 0, 0);
    if (flag == 0)
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }
    return 0;
}
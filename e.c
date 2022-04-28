#include <stdio.h>
// recursion to get the summation of an array
int arrSum(int arr[], int n, int i, int sum)
{
    if (i == n)
    {
        return sum;
    }
    sum = sum + arr[i];
    i = i + 1;
    return arrSum(arr, n, i, sum);
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int size;
        scanf("%d", &size);
        int arr[size + 5];
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[j]);
        }
        // for (int j = 0; j < size; j++)
        // {
        //     printf("%d", arr[j]);
        // }
        int result = arrSum(arr, size, 0, 0);
        printf("Case %d: %d\n", i, result);
    }
    return 0;
}
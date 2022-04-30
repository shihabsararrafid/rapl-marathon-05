#include <stdio.h>
#include <math.h>
int showSubset(int arr[], int start, int count, int n)
{
    if (count)
}
int main()
{
    int n, max;
    scanf("%d %d", &n, &max);
    int arr[n + 5];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr[i]);
    }
    showSubset(arr, 0, 0, n);
}
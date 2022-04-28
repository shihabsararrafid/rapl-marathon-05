#include <stdio.h>
int usedIndex[15] = {0}, res[15];
// int sizeOfResArr = sizeof(res) / sizeof(res[0]);
int showPerm(int currentpos, int arr[], int n)
{
    // the base case for which the recursion will stop
    // printf("%d\n", sizeOfResArr);
    if (currentpos == n)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ", res[i]);
        }
        printf("\n");

        return 0;
    }
    // recursive statements
    for (int i = 0; i < n; i++)
    {
        if (usedIndex[i] == 0)
        {
            usedIndex[i] = 1;
            res[currentpos] = arr[i];
            showPerm(currentpos + 1, arr, n);
            usedIndex[i] = 0;
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int numArr[n + 5];
    int resArr[n + 5];
    for (int i = 0; i < n; i++)
    {
        numArr[i] = i + 1;
    }
    // int numArr[3] = {1, 2, 3};
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", numArr[i]);
    // }
    showPerm(0, numArr, n);
    return 0;
}
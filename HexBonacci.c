#include <stdio.h>
long long int findHexABonacci(long long int arr[], int i, long long int n)
{
    if (n < 6)
    {
        return arr[n];
    }
    else if (i > n)
    {
        // printf("hELLO SUCCESS");
        // printf("%d\n", i);
        return arr[i - 1];
    }
    // printf(" i =%d\n", i);
    arr[i] = (arr[i - 6] + arr[i - 5] + arr[i - 4] + arr[i - 3] + arr[i - 2] + arr[i - 1]) % 10000007;
    // printf("%ld %ld %ld %ld %ld %ld \n", arr[i - 6], arr[i - 5], arr[i - 4], arr[i - 3], arr[i - 2], arr[i - 1]);
    // printf("arr[%d]==%ld\n", i, arr[i]);
    i = i + 1;
    // printf(" i =%d\n", i);
    return findHexABonacci(arr, i, n);
}
int main()
{
    long int t;
    scanf("%ld", &t);
    for (int i = 1; i <= t; i++)
    {
        long long int arr[10100];
        long long int n;
        scanf("%lld %lld %lld %lld %lld %lld %lld", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &n);
        // long int n;
        // scanf("%ld", &n);
        // printf("%ld\n", n);
        long long int res = findHexABonacci(arr, 6, n);
        printf("Case %d: %lld\n", i, res % 10000007);
    }
    return 0;
}
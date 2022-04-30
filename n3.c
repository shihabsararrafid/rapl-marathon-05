#include <stdio.h>
long int getRes(long int n, long int iter)
{
    while (n > 0 && n < 1000000)
    {
        if (n == 1)
        {
            return iter + 1;
        }
        else if (n % 2 == 1)
        {
            n = 3 * n + 1;
            long int i = iter + 1;
            getRes(n, i);
        }
        else if (n % 2 == 0)
        {
            n = n / 2;
            long int i = iter + 1;
            getRes(n, i);
        }
    }
}
long int compareArr(long int arr[], long int i, long int big, long int size)
{
    if (i + 1 == size)
    {
        return big;
    }
    else
    {
        if (arr[i] > big)
        {
            big = arr[i];
            compareArr(arr, i + 1, big, size);
        }
        compareArr(arr, i + 1, big, size);
    }
}
int main()
{
    long int a, b, count = 0;
    while (scanf("%ld %ld", &a, &b) == 2)
    {
        long int temp;
        long int f, l;
        f = a;
        l = b;
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        long int size = (b - a) + 1;

        long int arr[size + 5];
        long int j = 0, i;
        for (i = a; i <= b; i++)
        {
            count = getRes(i, 0);
            printf("%ld ", count);

            arr[i - a] = count;
        }
        long int big = arr[0];
        for (int k = 0; k < size; k++)
        {
            printf("%ld ", arr[k]);
        }

        // long int res = compareArr(arr, 0, arr[0], size);
        // printf("%ld %ld ", f, l);
        // printf("%ld\n", big);
    }

    return 0;
}
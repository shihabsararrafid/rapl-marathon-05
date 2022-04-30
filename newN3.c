#include <stdio.h>
long int getRes(long int n, long int iter)
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

int main()
{
    long int a, b, count = 0;
    while (scanf("%ld %ld", &a, &b) == 2)
    {
        long int temp;

        long int f, l;
        f = a;
        l = b;

        if (a > 0 && a < 1000000 && b > 0 && b < 1000000)
        {
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

                arr[i - a] = count;
            }
            int big = arr[0];
            int k;
            for (k = 0; k < size; k++)
            {
                if (arr[k] > big)
                {
                    big = arr[k];
                }
            }

            printf("%ld ", f);
            printf("%ld ", l);
            printf("%ld\n", big);
        }
    }

    return 0;
}
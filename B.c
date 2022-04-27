#include <stdio.h>

int M(int n)
{

    if (n >= 101)
    {

        return n - 10;
    }
    else if (n <= 100)
    {
        return (M(M(n + 11)));
    }
}
int main()
{
    int n;
    int N = n;
    while (1)
    {

        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }

        int result = M(n);
        printf("f91(%d) = %d\n", n, result);
    }
    return 0;
}
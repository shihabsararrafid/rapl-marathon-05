#include <stdio.h>
long int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    long int res = fact(n);
    printf("%ld\n", res);
    return 0;
}
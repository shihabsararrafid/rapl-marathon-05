#include <stdio.h>
int showfunc(int n)
{
    if (n == 0)
    {
        return n;
    }
    return n + showfunc(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int res = showfunc(n);
    printf("%d\n", res);
    return 0;
}
#include <stdio.h>
// print number upto n number using recursion
int showNum(int i, int n)
{

    if (i > n)
    {
        return 0;
    }
    printf("%d\n", i);
    i = i + 1;
    return showNum(i, n);
}
int main()
{
    int n;
    scanf("%d", &n);
    showNum(1, n);
    return 0;
}
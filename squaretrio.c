#include <stdio.h>
int fitSquare(int n, int square)
{
    if (n - 2 < 2)
    {
        return square;
    }
    // int prev = square;
    int rem = n - 2;
    // if (i == 0)
    // {
    //     rem = n - 2;
    // }
    // else
    // {
    //     rem = n;
    // }

    square = square + rem / 2;
    fitSquare((rem / 2) * 2, square);
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int res = fitSquare(n, 0);
        printf("%d\n", res);
    }
}
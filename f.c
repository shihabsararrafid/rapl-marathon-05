#include <stdio.h>
int showRes2(int i)
{
    if (i <= 0)
    {
        return 0;
    }
    printf("%d", i);
    return showRes2(i - 1);
}
int showRes1(int i)
{
    if (i > 9)
    {
        showRes2(9);
        return 0;
    }
    printf("%d", i);
    return showRes1(i + 1);
}

int main()
{
    int a;
    scanf("%d", &a);
    showRes1(1);
    return 0;
}
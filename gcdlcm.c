#include <stdio.h>
int gcd(long int num1, long int num2)
{
    long int l, s, rem;
    if (num1 % num2 == 0)
    {
        return num2;
    }
    l = num2;
    s = num1 % num2;
    gcd(l, s);
}
long long int lcm(long int num1, long int num2)
{
    int gcdOfTwo = gcd(num1, num2);
    int mul = num1 * num2;
    int lcmOFTwo = mul / gcdOfTwo;
    return lcmOFTwo;
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long int num1, num2, lar, sm;
        scanf("%d %d", &num1, &num2);
        if (num1 >= num2)
        {
            lar = num1;
            sm = num2;
        }
        else
        {
            lar = num2;
            sm = num1;
        }
        int res1 = gcd(lar, sm);
        int res2 = lcm(lar, sm);
        printf("%d %lld\n", res1, res2);
    }
    return 0;
}
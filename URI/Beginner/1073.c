#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int i;
    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            printf("%lld^2 = %lld\n", i, i*i);
        }
    }
    return 0;
}

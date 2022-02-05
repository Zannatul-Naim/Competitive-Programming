#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        double a,b,c;
        scanf("%lf%lf%lf",&a,&b,&c);
        double ans=(a*2 + b*3 + c*5)/10.0;
        printf("%0.1lf\n",ans);
    }
    return 0;
}

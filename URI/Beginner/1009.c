#include<stdio.h>

int main()
{
    double x,y;
    char str;
    scanf("%s",&str);
    scanf("%lf %lf", &x,&y);
    double ans=x + y*0.15;
    printf("TOTAL = R$ %0.2lf\n",ans);
    return 0;
}

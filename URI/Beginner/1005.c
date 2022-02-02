#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double a=3.5, b=7.5;
    double x,y;
    scanf(" %lf %lf", &x,&y);
    double ans = (a*x + b*y)/(a+b);
    printf("MEDIA = %0.5lf\n",ans);
    return 0;
}

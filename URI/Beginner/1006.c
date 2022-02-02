#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double a=2, b=3, c=5;
    double x,y,z;
    scanf(" %lf %lf %lf", &x,&y,&z);
    double ans = (a*x + b*y +c*z)/(a+b+c);
    printf("MEDIA = %0.1lf\n",ans);
    return 0;
}

#include<stdio.h>
void main()
{
    double a,b,c,d,e,f,x,y,z;
    scanf("%lf %lf %lf %lf %lf %lf ", &a, &b, &c, &d, &e, &f);
    x = b*c;
    y = e*f;
    z = x+y;
    printf("VALOR A PAGAR: R$ %0.2lf\n", z);
    return 0;
}
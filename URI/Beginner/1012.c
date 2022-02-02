#include<stdio.h>
void main()
{
    double pi;
    pi=3.14159;
    double a,b,c,x,z,y;
    scanf("%lf%lf%lf",&a,&b,&c);
    x=(a+b)/2;
    z=x*c;
    y=a*c;
    printf("TRIANGULO: %0.3lf\n", y/2);
    printf("CIRCULO: %0.3lf\n", pi*c*c);
    printf("TRAPEZIO: %0.3lf\n", z);
    printf("QUADRADO: %0.3lf\n", b*b);
    printf("RETANGULO: %0.3lf\n", a*b);
    return 0;
}

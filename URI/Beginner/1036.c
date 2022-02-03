#include<stdio.h>
#include<math.h>
int main()
{
 double a,b,c;
 scanf("%lf %lf %lf",&a,&b,&c);
 if(a==0)
 {
     printf("Impossivel calcular\n");
 }
 else if((b*b-4*a*c)<0)
 {
     printf("Impossivel calcular\n");
 }
 else
 {
 double R1= ( -b + sqrt(b*b - 4*a*c))/(2*a);
 double R2= ( -b - sqrt(b*b - 4*a*c))/(2*a);
 printf("R1 = %0.5lf\n",R1);
 printf("R2 = %0.5lf\n",R2);
 }
 return 0;
}

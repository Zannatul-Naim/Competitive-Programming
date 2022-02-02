#include<stdio.h>
int main()
{
    int a,b;
    double SALARY,x;
    scanf("%d",&a);

    printf("NUMBER = %d\n",a);
     scanf("%d%lf",&b,&x);
    SALARY=b*x;
    printf("SALARY = U$ %.2lf\n",SALARY);
    return 0;
}
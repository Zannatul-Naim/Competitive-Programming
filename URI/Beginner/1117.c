#include <stdio.h>

int main() {

 int flag=1,n=0;
 double sum=0;
    while(flag)
    {
        double a;
        scanf("%lf",&a);
        if(a>=0 && a<=10)
        {
            sum+=a;
            n++;
        }
        else
        printf("nota invalida\n");
        if(n==2)
        {

        flag=0;
        }

        }
        printf("media = %0.2lf\n",sum/2.0);
    return 0;
}

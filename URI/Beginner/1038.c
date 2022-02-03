#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x==1)
    {
        double a=y*4.00;
        printf("Total: R$ %0.2lf\n",a);
    }
   else if(x==2)
    {
        double a=y*4.50;
        printf("Total: R$ %0.2lf\n",a);
    }
    else if(x==3)
    {
        double a=y*5.00;
        printf("Total: R$ %0.2lf\n",a);
    }
    else if(x==4)
    {
        double a=y*2.00;
        printf("Total: R$ %0.2lf\n",a);
    }
    else if(x==5)
    {
        double a=y*1.50;
        printf("Total: R$ %0.2lf\n",a);
    }
    return 0;
}

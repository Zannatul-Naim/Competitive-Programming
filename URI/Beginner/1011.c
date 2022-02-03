#include <stdio.h>
#define pi 3.14159
int main()
{
    double x=4.0,y=3.0,ans=1;
    int r;
    scanf("%d",&r);
    ans=(x/y)*pi*r*r*r;
    printf("VOLUME = %0.3lf\n",ans);
    return 0;
}

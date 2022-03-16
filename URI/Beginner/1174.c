#include<stdio.h>
int main() {

      int i;
   for(i=0;i<100;i++)
   {
        double n;
        scanf("%lf",&n);
        if(n>10)
           continue;
        else
            printf("A[%d] = %0.1lf\n",i,n);

   }
    return 0;
}

#include <stdio.h>
 #include<math.h>
int main() {
    double i=1,sum=0;
 for(i;i<=100;i++)
 {
     sum=sum+(1.0/i);
 }
 printf("%0.2lf\n",sum);


    return 0;
}

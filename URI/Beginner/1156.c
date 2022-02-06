#include <stdio.h>
 
int main() {
    double sum=1,i=3,j=2;
 for(i;i<=39;i+=2)
 {
     sum=sum+(i/j);
     j*=2;
 }
 printf("%0.2lf\n",sum);
    return 0;
}

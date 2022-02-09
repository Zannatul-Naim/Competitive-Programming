#include <stdio.h>
#include<math.h>
int main() {
     int t;
     scanf("%d", &t);
     while(t--)
     {
         int cnt = 0;
        long int n;
        scanf("%ld",&n);
       for(int i = 2; i <= sqrt(n); i++)
       {
           if(n % i == 0)
           cnt++;
       }
       if(cnt == 0)
       printf("%ld eh primo\n",n);
       else
       printf("%ld nao eh primo\n",n);
     }

    return 0;
}

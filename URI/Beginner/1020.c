#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",n/365, (n%365)/30 , ((n%365)%30));
    return 0;
}

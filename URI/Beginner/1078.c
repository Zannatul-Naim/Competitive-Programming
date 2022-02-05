#include<stdio.h>
int main()
{
    long int n,m;
    scanf("%d",&n);
    m=n;
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d x %ld = %ld\n",i,n,m);
         m=m+n;
    }
    return 0;
}

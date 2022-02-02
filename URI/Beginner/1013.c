#include<stdio.h>
int main()
{
    int a,b,c,aux;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
        aux=a;
    else
        aux=b;
    if(aux>c)
        aux=aux;
    else
        aux=c;
    printf("%d eh o maior\n",aux);
    return 0;
}
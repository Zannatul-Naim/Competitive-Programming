#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int dif=((c*60)+d)-((a*60)+b);
    if(dif<=0)
    dif+=24*60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dif/60,dif%60);
    return 0;
}

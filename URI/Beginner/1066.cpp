#include <iostream>

using namespace std;

int main() {

int n,even=0,odd=0,positive=0,negative=0;
for(int i=0;i<5;i++)
{
    cin>>n;
    if(n>0)
        positive++;
    else if(n<0)
    negative++;
    if(n%2==0)
    even++;
    else
    odd++;
}
printf("%d valor(es) par(es)\n",even);
printf("%d valor(es) impar(es)\n",odd);
printf("%d valor(es) positivo(s)\n",positive);
printf("%d valor(es) negativo(s)\n",negative);

    return 0;
}

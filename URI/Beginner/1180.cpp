#include <iostream>

using namespace std;

int main() {

    int n,mini=0,x;
    cin>>n;
   int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mini=10000;
    for(int i=0;i<n-1;i++)
    {
        if(mini>a[i])
        {
        mini =a[i];
        x=i;
         }

    }
        cout<<"Menor valor: "<<mini<<endl;
        cout<<"Posicao: "<<x<<endl;

    return 0;
}

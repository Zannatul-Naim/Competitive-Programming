#include <iostream>

using namespace std;

int main() {
     int flag=1;
     while(flag)
     {
     int n;
     cin>>n;
         if(n==2002)
        {
            cout<<"Acesso Permitido"<<"\n";
            flag=0;
        }
        else
        cout<<"Senha Invalida"<<"\n";
     }

    return 0;
}

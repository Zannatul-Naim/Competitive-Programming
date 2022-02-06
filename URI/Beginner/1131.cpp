#include <iostream>

using namespace std;

int main() {
    int grenais=0,inter=0,gremio=0,empates=0;
    int flag=1;
    while(flag)
    {
        int a,b,c;
        cin>>a>>b>>c;
        grenais++;
        cout<<"Novo grenal (1-sim 2-nao)"<<"\n";
        if(a>b)
        inter++;
        else if(a<b)
        gremio++;
        else if(a==b)
        empates++;
        if(c!=1)
        flag=0;
    }
    cout<<grenais<<" grenais"<<"\n";
    cout<<"Inter:"<<inter<<"\n";
    cout<<"Gremio:"<<gremio<<"\n";
    cout<<"Empates:"<<empates<<"\n";
    if(inter>gremio)
        cout<<"Inter venceu mais"<<"\n";
    if(inter<gremio)
        cout<<"Gremio venceu mais"<<"\n";
    if(inter==gremio)
        cout<<"Nao houve vencedor"<<"\n";

    return 0;
}

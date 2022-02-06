#include <iostream>

using namespace std;

int main() {
    int flag=1;
    while(flag)
    {
        int a,b;
        cin>>a>>b;
        if(a==0 || b==0)
        {
            flag=0;
        }
        else if(a>0 && b>0)
        {
            cout<<"primeiro"<<"\n";
        }
        else if(a>0 && b<0)
        {
            cout<<"quarto"<<"\n";
        }
         else if(a<0 && b<0)
        {
            cout<<"terceiro"<<"\n";
        }
         else if(a<0 && b>0)
        {
            cout<<"segundo"<<"\n";
        }
    }

    return 0;
}

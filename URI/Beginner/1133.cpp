#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin>>a>>b;

    if(a<b){
            for(a=a+1;a<b;a++)
    {
        if(a%5==2 || a%5==3)
        cout<<a<<"\n";
    }
    }
    else if(a>b){
            for(b=b+1;b<a;b++)
    {
        if(b%5==2 || b%5==3)
        cout<<b<<"\n";
    }
    }
    return 0;
}

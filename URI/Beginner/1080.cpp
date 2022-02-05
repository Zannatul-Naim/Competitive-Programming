#include <iostream>

using namespace std;

int main() {
   long int high=0,t=1,m;
    for(int i=1;i<=100;i++)
    {
        long int n;
        cin>>n;
        if(n>high)
        {
            high=n;
            m=t;
        }
        t++;
    }
    cout<<high<<"\n"<<m<<"\n";

    return 0;
}

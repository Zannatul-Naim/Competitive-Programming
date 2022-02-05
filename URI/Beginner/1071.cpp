#include <iostream>

using namespace std;

int main() {

int x,y,sum=0;
cin>>x>>y;
int m=max(x,y);
int n=min(x,y);
for(n=n+1;n<m;n++)
{
    if(n%2==1 || n%2==-1)
        sum+=n;
}
cout<<sum<<"\n";

    return 0;
}

#include <iostream>
 
using namespace std;
 
int main() {
 float n;
 int cnt=0;
for(int i=1;i<=6;i++)
{
    cin>>n;
    if(n>0)
    {
        cnt++;
    }
}
cout<<cnt<<" valores positivos"<<"\n";
 
    return 0;
}

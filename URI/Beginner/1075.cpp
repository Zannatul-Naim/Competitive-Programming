#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=10000;i+=n)
    {
        cout<<i+2<<"\n";
    }
    return 0;
}

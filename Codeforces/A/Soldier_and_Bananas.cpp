#include<iostream>

using namespace std;

int main()
{
    long long int k,n,w;
    cin>>k>>n>>w;
    long long int total = 0;
    for(long long int i = 1; i <= w; i++)
    {
        total += k*i;
    }
    if(total > n)
    {
        cout<<total - n<<"\n";
    }
    else
    cout<<0<<"\n";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x=0;
    string s;
    cin>>t;
    while(t--)
    {
       cin>>s;
       if(s[1]=='+')
       {
           ++x;
       }
       else
       {
           --x;
       }
    }
    cout<<x<< "\n";
    return 0;
}

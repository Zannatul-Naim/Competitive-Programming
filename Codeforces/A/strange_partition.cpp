#include<bits/stdc++.h>
 
 using namespace std;

#define ll long long
void solve()
{
    long long n,x;
    cin>>n>>x;
    long long a[n];
    ll total=0,cnt=0;
   for(ll i=0;i<n;i++)
   {
       cin>>a[i];
      total+=a[i];
       if(a[i]%x==0)
        cnt+=a[i]/x;
       else
        cnt+=a[i]/x +1;
   }
   if(total%x==0)
    total=total/x;
    else
    total=total/x +1;

    cout<<total<<" "<<cnt<<"\n";
}


 int main()
 {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     cout<<fixed;
    int t;
    cin>>t;
    while(t--)
    {
             solve();

    }
 }

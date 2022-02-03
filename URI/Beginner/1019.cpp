#include<bits/stdc++.h>
 
 using namespace std;

#define ll long long
void solve()
{
    int n;
    cin>>n;
    cout<<n/3600<<":"<<(n%3600)/60<<":"<<(n%3600)%60<<"\n";
}
 int main()
 {
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cout<<fixed;

             solve();
             return 0;
 }

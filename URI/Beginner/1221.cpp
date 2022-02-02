#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int cnt=0;
        for(int i=2;i*i<n;i++)
        {
            if(n%i==0)
                {
                    cnt++;
                }
        }
        if(cnt==0)
        cout<<"Prime"<< "\n";
        else
        cout<<"Not Prime"<< "\n";
    }
    return 0;
}

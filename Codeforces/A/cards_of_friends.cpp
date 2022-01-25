#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int w,h,n,cnt1=1,cnt2=1;
        cin>>w>>h>>n;
        while(w%2==0)
        {
            cnt1*=2;
            w/=2;
        }
        while(h%2==0)
        {
            cnt2*=2;
            h/=2;
        }
        int cnt3=cnt1*cnt2;
       if(cnt3>=n)
         cout<<"YES"<<"\n";

        else
         cout<<"NO"<<"\n";
    }
      return 0;
}






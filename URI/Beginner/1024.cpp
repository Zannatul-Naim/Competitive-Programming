#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]=s[i]+3;
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+3;
            }
        }
        reverse(s.begin(), s.end());
        int h=s.size()/2;
        for(int i=h;i<s.size();i++)
        {
            s[i]=s[i]-1;
        }
        cout<<s<<endl;
    }
    return 0;
} 

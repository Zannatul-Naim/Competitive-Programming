#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int b = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'B')
         b++;
    }
    if(b == (s.length() - b))
    cout<<"YES\n";
    else
    cout<<"NO\n";
    }
    return 0;
}

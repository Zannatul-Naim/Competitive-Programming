    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    int main()
    {
         long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        long long int x,y;
         long long int prod;
        x=max(a,b);
         long long int t=min(a,b);
        y=max(c,d);
         long long int m=min(c,d);
        long long int p=x*y;
        long long int o=x*m;
         long long int u=max(p,o);
        long long int h=t*y;
         long long  int j=t*m;
         long long int e=max(h,j);
        prod=max(u,e);
        cout<<prod<<endl;
        return 0;
    }
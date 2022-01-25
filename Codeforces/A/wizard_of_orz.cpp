

    #include <bits/stdc++.h>
    using namespace std;
    int32_t main() 
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            
            for(int i=1;i<=n;i++)
            {
                int add=abs(2-i);
                cout<<(8+add)%10;
            }
            cout<<endl;
        }
        return 0;
    }    

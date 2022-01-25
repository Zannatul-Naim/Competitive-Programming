    #include <bits/stdc++.h>
     
        using namespace std;
        
        void solve (){
            int n,k;
            cin>>n>>k;
            int c=0;
            vector<int>a(n);
            for(int i=0;i<n;i++)
                cin>>a[i];
            int ok=1;
            for(int i=0;i<n;i++){
                if(a[i]>k){
                    ok=0;
                    break;
                }
            }
            if(ok){
                cout<<"YES"<<"\n";
                return;
            }
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(a[i]+a[j]<=k){
                        cout<<"YES"<<"\n";
                        return;
                    }
                }
            }
            cout<<"NO"<<"\n";
        }
        int main(){
            ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            int t;
            cin>>t;
            for(int i=1;i<=t;i++){
                solve();
            }
            return 0;
        }

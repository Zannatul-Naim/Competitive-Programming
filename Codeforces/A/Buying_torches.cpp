    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin >> t;
        while(t--){
            long long x, y, k;
           cin >> x >> y >> k;
            long long ans,a = k * y + k - 1;
            ans = (a / (x-1));
            if(ans * (x-1) != a) ans++;
            ans += k;
            cout << ans << endl;
        }
        return 0;
    }

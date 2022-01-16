    #include <bits/stdc++.h>
    #define rep(i,n) for (int i = 0; i < (n); ++i)
    using namespace std;
    using ll = long long;
    using P = pair<int,int>;
     
    int main() {
      int n;
      cin >> n;
      ll ans = 0;
      for (int a = 1; a <= n; ++a) {
        ans += (n-1)/a;
      }
      cout << ans << endl;
      return 0;
    }
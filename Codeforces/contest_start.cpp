#include <bits/stdc++.h>
using namespace std;

void solve() {
  
  long long n, x, k;
  cin >> n >> x >> k;
  
  long long temp = min(k/x, n-1);
  long long ans = (n-temp)*temp + temp*(temp-1)/2;
  
  cout << ans << endl;
}

int main() 
{
    
    int t;
    cin >> t;
    
    while(t--) solve();
    
    return 0;
}

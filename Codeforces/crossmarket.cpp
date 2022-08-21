#include <iostream>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin >> t;
    while(t--) {
      ll n, m;
      cin >> n >> m;
      if(n == 1 && m == 1) cout << 0 << endl;
      else {
              ll ans1 = 2*(m-1) + n;
              ll ans2 = 2*(n-1) + m;
              ll ans = min(ans1, ans2);
      
              cout << ans << endl;
      }
    }
    return 0;
}

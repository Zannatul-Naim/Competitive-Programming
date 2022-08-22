#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--) {
      int n;
      cin >> n;
      int ans = (n / 100) + (n%100);
      if(ans > 10) cout << -1 << endl;
      else cout << ans << endl;
    }
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"


void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

  ll n;
  cin >> n;

  vector < ll > v(n);

  for(auto &i : v) cin >> i;

  ll cnt = 0, ans = 0;

  for(ll i = 0; i < n; ) {

    if(v[i] < 0) {
      cnt++;
      while(i < n and v[i] <= 0) {
        v[i] = -v[i];
        i++;
      }
    } else {
      i++;
    }
  }

  for(auto i : v) ans += i;

  cout << ans << " " << cnt << endl; 

}	

int main() {

	fastIO();

	int t = 1;
	cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}

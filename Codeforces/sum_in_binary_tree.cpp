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

  ll ans = 0;

  while(n) {
    ans += n;

    n >>= 1;
  }

  cout << ans << endl;

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

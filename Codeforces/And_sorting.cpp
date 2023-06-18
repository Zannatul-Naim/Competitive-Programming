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

  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  vector < int > v;
  for(int i = 0; i < n; i++) {
    if(a[i] != i) v.push_back(i);
  }

  int ans = v[0];

  for(auto i : v) ans &= i;

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

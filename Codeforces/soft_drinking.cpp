#include<bits/stdc++.h>
#include<sstream>
using namespace std;

#define ll long long
#define endl "\n"
#define input cin >>
#define output cout <<
#define pb push_back

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {
  
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  
  int x = (k*l) / nl;
  int y = c*d;
  int z = p / np;
  
  int ans = min(x, min(y, z));
  cout << ans / n << endl;
  
}

int main()
{
	fastIO();

	solve();

	return 0;
}

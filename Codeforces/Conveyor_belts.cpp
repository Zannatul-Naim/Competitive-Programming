#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define in cin >>
#define out cout <<
#define pb push_back

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}


void solve() {

	int n, x1, x2, y1, y2;
	cin >> n >> x1 >> y1 >> x2 >> y2;

	int x = min(min((x1-1), (n-x1)), min((y1-1), (n-y1)));
	int y = min(min((x2-1), (n-x2)), min((y2-1), (n-y2)));

	int ans = x-y;

	if(ans < 0) cout << -ans << endl;
	else cout << ans << endl;
	
}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}

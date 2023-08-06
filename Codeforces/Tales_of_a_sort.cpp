#include <bits/stdc++.h>
#include <sstream>
using namespace std;

#define ll long long
#define endl "\n"
const int N = 2e5 + 1;

void fastIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve()
{

	int n; 
	cin >> n;

	int a[n];

	for(int i = 0; i < n; i++) cin >> a[i];
	int ans = 0;
	for(int i = n-2; i >= 0; i--) {
		if(a[i] > a[i+1]) {
			ans = max(ans, a[i]);
		}
	}

	cout << ans << endl;

}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while (t--)
		solve();

	return 0;
}

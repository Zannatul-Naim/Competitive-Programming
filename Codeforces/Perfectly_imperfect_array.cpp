#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define pb push_back
#define sortAll sort(v.begin(), v.end());


void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

	int n;
	cin >> n;

	vector < int > v(n);

	for(auto &i : v) cin >> i;

	bool flag = true;
	for(auto i : v) {
		int x = sqrt(i);

		if(x*x == i) continue;
		else {
			flag = false;
			break;
		}
	}

	if(flag) cout << "NO" << endl;
	else cout << "YES" << endl;

}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while(t--) {
	  solve();
	}

    // cerr << "Execution time: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";

    return 0;
}

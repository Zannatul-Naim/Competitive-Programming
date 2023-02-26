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

	string s;
	cin >> s;

	int cnt = 0;

	for(int i = 0; i < (n+1)/2; i++) {

		if(s[i] != s[n-i-1]) {

			while(i < (n+1)/2 and (s[i] != s[n-i-1])) i++;
			cnt++;
		}
	}

	if(cnt <= 1) cout << "YES" << endl;
	else cout << "NO" << endl;

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

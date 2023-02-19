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

	string s;
	cin >> s;

	int cnt = 0, c = 0;
	int j = 0;
	while(j < s.size() && s[j] != '1') {
		c++;
		j++;
	}

	for(int i = j+1; i < s.size(); i++) {
		if(s[i] == '1') cnt++;
	}

	// cout << s.size() << " " << c << " " << cnt << endl;

	if(s.size()-cnt-c >= 7) cout << "YES" << endl;
	else cout << "NO" << endl;


}

int main()
{
	fastIO();

	int t = 1;
	// cin >> t;

	while(t--) {
	  solve();
	}

    // cerr << "Execution time: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";

    return 0;
}

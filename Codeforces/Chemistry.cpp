#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
const int N = 2e5 + 1;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}


void solve() {

	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;

	if(n == 1) {
		cout << "YES" << endl;
		return;
	}

	map <char, int> mp;

	for(auto i : s) mp[i]++;
	int cnt = -2;
	for(auto i : mp) {
		if(i.second%2) cnt++;
	}
	if(cnt >= k) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
	}

}


int main()
{
	fastIO();

	int t = 1;
	cin >> t;
	while (t--) {
        solve();
    }

	return 0;
}

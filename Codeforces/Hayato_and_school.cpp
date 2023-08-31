#include <bits/stdc++.h>
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

void solve() {

	int n;
	cin >> n;
	vector < int > o, e;

	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if(x%2) o.push_back(i+1);
		else e.push_back(i+1);
	}

	if(o.size() >= 3) {
		cout << "YES" << endl;
		for(int i = 0; i < 3; i++) {
			cout << o[i] << " ";
		} cout << endl;
	} else {
		if(o.size() > 0 and e.size() > 1) {
			cout << "YES" << endl;
			cout << o[0] << " " << e[0] << " " << e[1] << endl;
		} else {
			cout << "NO" << endl;
		}
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

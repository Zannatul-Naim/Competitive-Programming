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
	int i = 0;
	vector < int > v;
	while(n) {
		int x = n%10;
		if(x != 0) {
			int y = x*pow(10, i);
			v.push_back(y);
		}
		i++;
		n /= 10;
	}

	reverse(v.begin(), v.end());
	cout << v.size() << endl;
	for(auto i : v) cout << i << " ";
	cout << endl;


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

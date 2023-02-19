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


int f(int n) {
	n += 1;

	while(n % 10 == 0) n /= 10;

	return n;
}


void solve() {

	int n;
	cin >> n;

	set < int > s;

	while(s.find(n) == s.end()) {
		
		s.insert(n);
		n = f(n);
	}

	cout << s.size() << endl;

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

#include <bits/stdc++.h>

using namespace std;


void solve() {
	
	int n, k;
	cin >> n >> k;
	
	vector <int> v(n);
	for(auto &i : v) cin >> i;
	
	vector < int > d;
	int s = 0;
	for(int i = 0; i < n-1; i++) {
		int x = abs(v[i] - v[i+1]);
		d.push_back(x);
		s += x;
	}
	
	sort(d.begin(), d.end(), greater<int>());
	
	for(int i = 0; i < k-1; i++) {
		s -= d[i];
	}
	
	cout << s << endl;
}

int main() {
	
	int t = 1;
	cin >> t;
	while(t--) solve();
	
	return 0;
}

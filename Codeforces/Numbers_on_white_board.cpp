#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define INF INT_MAX


void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}


void solve() {

	int n;
	cin >> n;

	multiset < int > s;

	for(int i = 1; i <= n; i++) {
		s.insert(i);
	}

	vector < pair < int, int > > ans;

	for(int i = 1; i <= n-1; i++) {

		auto it = s.end();
		it--;
		int a = *it;
		s.erase(it);

		it = s.end();
		it--;
		int b = *it;
		s.erase(it);
		int x = (a+b+1)/2;
		s.insert(x);
		ans.push_back({a, b});
	}

	auto it = s.begin();
	cout << *it << endl;

	for(auto i : ans) {
		cout << i.first << " " << i.second << endl;
	}

}	

int main() {

	fastIO();

	int t = 1;
	cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}

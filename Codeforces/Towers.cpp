#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define in cin >>
#define out cout <<
#define pb push_back
#define YES 1
#define NO 0

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void print(bool f) {
	if(f) cout << "YES" << endl;
	else cout << "NO" << endl;
}

void solve() {

	int n;
	cin >> n;
	
	map <int, int> m;
	
	for(int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		
		m[x]++;
	}
	
	int h = 1;
	for(auto i : m) {
		h = max(h, i.second);
	}
	
	
	cout << h << " " << m.size() << endl;

}	

int main()
{
	fastIO();

	int t = 1;
	// cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}

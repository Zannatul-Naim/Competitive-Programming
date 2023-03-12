#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define input cin >>
#define output cout <<
#define pb push_back

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

	int n;
	cin >> n;

	map < string, int > mp;
	set < string > st;
	vector < string > vs;

	for(int i = 1; i <= n; i++) {
		string s;
		cin >> s;
		vs.push_back(s);
		st.insert(s);
		mp[s]++;
	}

	// if(st.size() == n) {
	// 	cout << 0 << endl;
	// 	for(auto i : vs) cout << i << endl;

	// 	return ; 
	// }

	int cnt = 0;
	vector < string > v;
	
	for(int i = 0; i < n; i++) {

		for(int j = 0; j < n; j++) {
			if(i == j) continue;

			if(vs[i] == vs[j]) {

				while(mp.count(vs[j])) {
					if(vs[j][0] == '9') vs[j][0] = '0';
					else vs[j][0]++;
				}
				mp[vs[j]]++;
				cnt++;
			}
		}
	}


	cout << cnt << endl;
	for(auto i : vs) {
		cout << i << endl;
	}

}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}

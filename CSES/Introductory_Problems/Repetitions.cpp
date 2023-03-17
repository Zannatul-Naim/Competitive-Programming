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
 
	string s;
	cin >> s;
 
	int ans = 0;
 
	for(int i = 0; i < s.size(); i) {
		char ch = s[i];
		int cnt = 0;
		while(ch == s[i]) {
			i++;
			cnt++;
		}
 
		ans = max(ans, cnt);
	}
 
	cout << ans << endl;
	
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

#include<bits/stdc++.h>

using namespace std;

int lcs(string a, string b, int n, int m) { // find the length of longest common substring

	int dp[n+1][m+1];
	memset(dp, 0, sizeof(dp));

	int res = 0;

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			if(a[i-1] == b[j-1]) {
				dp[i][j] = dp[i-1][j-1]+1;
				res = max(res, dp[i][j]);
			}
		}
	}
	return res;
}

void solve() {

	string a, b;
	cin >> a >> b;

	int n = a.size();
	int m = b.size();

	int l = lcs(a, b, n, m);  // length of the longest common substring

	cout << n+m - 2*l << endl;

}	

int main() {

	int t = 1;
	cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}

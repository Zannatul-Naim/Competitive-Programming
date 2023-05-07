#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define in cin >>
#define out cout <<
#define pb push_back

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

ll a[1001][1001];
bool vis[1001][1001];
int n, m;
int v = 0;

bool isValid(int i, int j) {
	if(i >= n or j >= m or i < 0 or j < 0 or vis[i][j]) return false;
	return true;
}

void dfs(int i, int j) {
	
	v += a[i][j];
	vis[i][j] = true;
	
	if(isValid(i+1, j))
		dfs(i+1, j);
	if(isValid(i, j+1))
		dfs(i, j+1);
	if(isValid(i, j-1))
		dfs(i, j-1);
	if(isValid(i-1, j))
		dfs(i-1, j);
}

void solve() {
	
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> a[i][j];
			if(a[i][j] == 0) vis[i][j] = true;
			else vis[i][j] = false;
		} 
	}
	
	int ans = 0;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(!vis[i][j]) {
				dfs(i, j);
				ans = max(ans, v);
				v = 0;
			}
		}
	}
	
	cout << ans << endl;
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

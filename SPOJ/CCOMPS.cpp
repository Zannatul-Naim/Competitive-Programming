#include<bits/stdc++.h>
#include<sstream>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

const int N = 1e6+1;

vector < int > adj[N];
vector < bool > vis(N, false);

void dfs(int src) {
    if(vis[src]) return;
    vis[src] = true;
    for(auto i : adj[src]) {
        if(!vis[i]) dfs(i);
    }
    return;
}

void solve() {

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++) {

        int x, y;
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    int cnt = 0;

    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            cnt++;
            dfs(i);
        }
    }

    cout << cnt << endl;
}

int main()
{
	fastIO();

	int t = 1;
	// cin >> t;

	while(t--) solve();

	return 0;
}

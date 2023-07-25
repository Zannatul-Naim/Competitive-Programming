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


void solve() {

    int n, k;
    cin >> n >> k;

    vector < int > v(n);

    for(auto &i : v) cin >> i;

    int i = 0;
    int cnt = 0;

    for(i; i < n; i++) {
        if(v[i] == v[0]) cnt++;
        if(cnt == k) break;
    }
    if(cnt < k) {
        cout << "NO" << endl;
        return;
    } else if(cnt == k and v[0] == v[n-1]) {
        cout << "YES" << endl;
        return; 
    }
    cnt = 0;
    for(int j = n-1; j > i; j--) {
        if(v[j] == v[n-1]) cnt++;
    }
    if(cnt < k) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES"<< endl;

}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while(t--) solve();

	return 0;
}

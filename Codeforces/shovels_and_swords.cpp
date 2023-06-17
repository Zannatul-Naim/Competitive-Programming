#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define pb push_back


void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {

	// // codeforces 363 B
		
    // int n,k;
    // cin>>n>>k;
    // vector<int>v(n);
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }
    // int sum(0);
    // int pos(0);
    // for(int i=0;i<k;i++){
    //     sum+=v[i];
    // }

    ll a, b;
    cin >> a >> b;

    ll mn = min(a, b);
    ll mx = max(a, b);

    if(mn*2 <= mx) {
        cout << mn << endl;
        return;
    }

    cout << (a+b)/3 << endl;

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

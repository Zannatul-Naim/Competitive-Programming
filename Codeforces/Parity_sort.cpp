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

    int n;
    cin >> n;
    vector < int > v(n);
    for(auto &i : v) cin >> i;

    vector < int > o;
    vector < int > e;

    for(auto i : v) {
        if(i%2) o.push_back(i);
        else e.push_back(i);
    }

    sort(o.begin(), o.end());
    sort(e.begin(), e.end());

    vector < int > ans;
    int i = 0, j = 0;

    for(auto k : v) {
        if(k % 2) {
            ans.push_back(o[i]);
            i++;
        } else {
            ans.push_back(e[j]);
            j++;
        }
    }

    for(int i = 0; i < n-1; i++) {
        if(ans[i+1] < ans[i]) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;

}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while(t--) solve();

	return 0;
}

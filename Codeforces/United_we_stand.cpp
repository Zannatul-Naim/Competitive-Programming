#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
const int N = 2e5 + 1;

void fastIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

bool is_palindrome(string s) {

    int n = s.size();

    for(int i = 0; i < n; i++) {
        if(s[i] != s[n-i-1]) return false;
    }
    return true;
}

void solve() {

    int n;
    cin >> n;

    vector < int > v(n);

    for(auto &i : v) cin >> i;

    sort(v.begin(), v.end());

    if(v[0] == v[n-1]) {
        cout << -1 << endl;
        return;
    }

    int val = v[n-1];
    int cnt = 1;
    for(int i = n-2; i >= 0; i--) {
        if(v[i] == val) {
            cnt++;
        }
    }

    cout << n-cnt << " " << cnt << endl;

    for(int i = 0; i < n-cnt; i++) {
        cout << v[i] << " ";
    } cout << endl;

    for(int i = 0; i < cnt; i++) {
        cout << val << " ";
    } cout << endl;

}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while (t--) {
        solve();
    }

	return 0;
}

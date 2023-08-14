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

    string s;
    cin >> s;

    string tmp = s + 'a';
    string tmpp = 'a' + s;
    if(is_palindrome(tmp) == false) {
        cout << "YES" << endl;
        cout << tmp << endl;

        return;
    } 
    if(is_palindrome(tmpp) == false) {
        cout << "YES" << endl;
        cout << tmpp << endl;

        return;
    } 
    cout << "NO" << endl;

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

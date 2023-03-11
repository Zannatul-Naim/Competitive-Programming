#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define pb push_back
#define sortAll sort(v.begin(), v.end());


void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}
int mod = 1e6+3;
ll p(ll n) {

    ll ans = 1;
    while(n--) {
        ans = (ans*2) % mod;
    }

    return ans;
}

void convert(string s) {


    reverse(s.begin(), s.end());

    ll ans = 0;
    for(ll i = 0; i < s.size(); i++) {
        if(s[i] == '1') 
            ans = ans + p(i) % mod;
    } 

    cout << ans % mod << endl;
}

void solve() {

    string s;
    cin >> s;

    map < char, string > mp;

    mp['>'] = "1000";
    mp['<'] = "1001";
    mp['+'] = "1010";
    mp['-'] = "1011";
    mp['.'] = "1100";
    mp[','] = "1101";
    mp['['] = "1110";
    mp[']'] = "1111";

    string ans = "";

    for(auto i : s) {
        ans += mp[i];
    }
    convert(ans);
    
}

int main()
{
	fastIO();

	ll t = 1;
	// cin >> t;
	while(t--) {

	  solve();
	}

    // cerr << "Execution time: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";

    return 0;
}

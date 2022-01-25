#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                ans += min(a, b + c);
            } else {
                ans += min(b, a + c);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

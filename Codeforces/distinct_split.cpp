#include <bits/stdc++.h> 


using namespace std;


int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        string s;
        cin >> s;

        set < char > s1, s2;

        vector < int > pre1(n+1, 0), pre2(n+1, 0);

        for(int i = 0; i < n; i++) {
            s1.insert(s[i]);
            pre1[i+1] = s1.size();
        }
        for(int i = n-1; i >= 0; i--) {
            s2.insert(s[i]);
            pre2[n-i] = s2.size();
        }

        int ans = 0;

        for(int i = 0; i <= n; i++) {
            ans = max(pre1[i]+pre2[n-i], ans);
        }

        cout << ans << endl;

    }

    return 0;
}

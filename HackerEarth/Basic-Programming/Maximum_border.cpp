#include<iostream>
using namespace std;

void solve() {
    char ch;
    int n, m, cnt_hash = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        int cnt_hash_1 = 0;
        for(int j = 0; j < m; j++) {
            cin >> ch;
            if(ch == '#') {
                cnt_hash_1++;
            }
        }
        if(cnt_hash_1 > cnt_hash) {
            cnt_hash = cnt_hash_1;
        }
    }
    cout << cnt_hash << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

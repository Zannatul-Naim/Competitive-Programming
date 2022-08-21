#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        bool flag = true;
        for(int i = 1; i < n; i++) {
            if((a[i] %a[0]) == 0) continue;
            else {
                flag = false;
                break;
            }
        }

        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}

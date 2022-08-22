#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int cnt = 0;
	    bool flag = false;
	    for(int i = 0; i < n && !flag; i++) {
	        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
	            cnt = 0;
	        }
	        else {
	            cnt++;
	            if(cnt == 4) {
	                flag = true;
	                break;
	            }
	        }
	    }
	    if(flag) cout << "NO" << endl;
	    else cout << "YES" << endl;
	}
	return 0;
}

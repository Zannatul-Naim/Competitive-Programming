#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--) {
      int freq[1001] = {0};
      int n;
      cin >> n;
      int a[n];
      for(int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
      }
      int mx = *max_element(freq, freq+1001);
      cout << n - mx << endl;
      
    }
    return 0;
}

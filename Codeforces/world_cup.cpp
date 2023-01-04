#include<bits/stdc++.h>
using namespace std;


void solve() {
  
  int n;
  cin >> n;
  
  int v[n];
  
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  
  int index, min = 1000000007;
  
  for(int i = 0; i < n; i++) {
    int m = v[i] / n;
    if(((v[i] % n) - i) > 0) m += 1;
    // cout << m << " ";
    if(m < min) {
      min = m;
      index = i;
    }
    
  }
  cout << index + 1 << endl;
  
}

int main() {
  
  solve();
  
  return 0;
}

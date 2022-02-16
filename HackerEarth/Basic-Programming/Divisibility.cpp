#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(a[n-1] % 10 == 0) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
    return 0;
}

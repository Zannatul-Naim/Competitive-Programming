#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
            //if(i == j) sum += a[i][j];
        }
    }
    int x = n - 1;
    int first = 0, second = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) first += a[i][j];
            if(j == x) {
                second += a[i][j];
                x--;
            }
        }
    }
    cout << abs(first - second) << endl;

    
    return 0;
} 

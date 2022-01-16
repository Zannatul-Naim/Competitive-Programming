#include <iostream>
#include<cmath>
using namespace std;
 
int main()
{
   int l, m;
   cin >> l >> m;
   string s;
   cin >> s;
   for(int i = 0; i < l - 1; i++)
        cout << s[i];
   for(int i = m - 1; i >= l - 1; i--)
        cout << s[i];
   for(int i = m; i < s.length(); i++)
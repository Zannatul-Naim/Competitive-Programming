#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
      int n,m;
      cin>> n >> m;
      int a,b,c,d;
      bool flag = false;
      for(int i = 1; i <= n; i++)
      {
        cin >> a >> b >> c >> d;
        if(b == c)
          flag = true;
      }
      if((m*m) % 4 == 0 && flag == true)
        cout << "Yes" << "\n";
      else
        cout << "NO" << "\n";
    }
    return 0;
}

#include<bits/stdc++.h>

 using namespace std;

#define ll long long
void solve()
{
    int n;
    cin >> n;
    cout << n << "\n";
    int x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0, x7 = 0;
    while(n)
    {
        if(n >= 100)
        {
            x1 = n / 100;
            n = n%100;
        }
        else if(n >= 50)
        {
            x2 = n / 50;
            n = n%50;
        }

         else if(n >= 20)
        {
            x3 = n/20;
            n = n%20;
        }

         else if(n >= 10)
        {
            x4 = n/10;
            n = n%10;
        }

         else if(n>=5)
        {
            x5=n/5;
            n=n%5;
        }

         else if(n>=2)
        {
            x6=n/2;
            n=n%2;
        }

         else if(n>=1)
        {
            x7=n/1;
            n=n%1;
        }
    }
     cout<<x1<<" "<<"nota(s) de R$ 100,00"<<"\n";
     cout<<x2<<" "<<"nota(s) de R$ 50,00"<<"\n";
     cout<<x3<<" "<<"nota(s) de R$ 20,00"<<"\n";
     cout<<x4<<" "<<"nota(s) de R$ 10,00"<<"\n";
     cout<<x5<<" "<<"nota(s) de R$ 5,00"<<"\n";
     cout<<x6<<" "<<"nota(s) de R$ 2,00"<<"\n";
     cout<<x7<<" "<<"nota(s) de R$ 1,00"<<"\n";
}
 int main()
 {
    solve();
    return 0;
 }

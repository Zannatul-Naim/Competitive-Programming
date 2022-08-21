    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
            ios::sync_with_stdio(0);
            cin.tie(0);
            int t;
            cin >> t;
            while(t--)
            {
                int n;
                cin >> n;
                int sum = 0;
                for(int i = 1; i <= 9; i++)
                {
                    int total=0;
                    for(int j = 1; j <= 4; j++)
                    {
                        total = total * 10 + i;
                            sum = sum + j;
                            if(total == n)
                                    cout << sum << "\n";
                     }
                }
     
            }
            return 0;
    }

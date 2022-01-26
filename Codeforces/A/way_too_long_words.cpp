    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n,l;
        cin >> n;
     
        string str;
        for(int i = 0; i < n; i++)
        {
     
                cin >> str;
                   l = str.size();
     
            if(l > 10)
            {
                cout << str[0] << l-2 << str[l-1] << "\n";
            }
            else
                cout << str << "\n";
        }
     
        return 0;
    }

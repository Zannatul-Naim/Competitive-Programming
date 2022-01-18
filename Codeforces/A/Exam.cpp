    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long i,mid,n;
        cin >> n;
        mid = n / 2;
        if(n <= 2)
        {
            cout << "1" << endl;
            cout << "1 " << endl;
        }
       else if(n == 3)
        {
            cout << "2" << endl;
            cout << "1  3" << endl;
        }
        else if(n == 4)
        {
            cout << "4" << endl;
            cout << "3 1 4 2" << endl;
        }
        else
        {
                cout << n << endl;
                for(i = 1; i <= n; i+= 2)
                    cout << i <<" ";
                for(i = 2; i <= n; i+= 2)
                    cout<< i <<" ";
            cout<<endl;
        }
    }

    #include<iostream>
    using namespace std;
    int main()
    {
        int a,b,c;
        cin>>a>>b>>c;
        int i = 1;
        bool bl = true;
        int x = c;
        while(x <= b && bl)
        {
            x = c * i;
            if(x >= a && x <=b)
            {
                bl = false;
            }
            else
                i++;
        }
        if(bl){
            cout<<"-1\n";
        }
        else
            cout<<x<<"\n";
        return 0;
    }
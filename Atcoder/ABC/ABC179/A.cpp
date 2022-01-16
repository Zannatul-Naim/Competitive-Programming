    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        string str,str1;
        string st = "es";
        string stt= "s";
        cin>>str;
      int  x=str.size();
        //cout<< x;
        if(str[x-1]=='s')
        {
            str1=str + st;
            cout<<str1<< "\n";
        }
        else
        {
            str1= str+stt;
            cout<<str1<< "\n";
        }
        return 0;
    }
    #include <bits/stdc++.h>
    #include <iostream>
    #include <vector>
    #include <set>
    #include <iterator>
    #include <string>
    #include <stdio.h>
    #include <string.h>
    #include <sstream>
    #include <ctype.h>
     
    using namespace std;
     
    int main(){
        long long x,y,a;
        cin>>x>>y>>a;
        long long remx,remy;
        remx=0;
        remy=0;
        if (x%a==0){
                remx+=x/a;
     
        }
        else{
            remx+=1+(x/a);
        }
        if (y%a==0){
            remy+=y/a;
        }
        else{
            remy+=1+(y/a);
        }
        cout<<remx*remy;
    return 0;
    }
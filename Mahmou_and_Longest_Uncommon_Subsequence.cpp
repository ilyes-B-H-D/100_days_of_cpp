    #include <bits/stdc++.h>

    using namespace std;

    int main(){
        string s,n;

        cin>>s>>n;

        if(s==n)cout<<-1;
        else cout<<max(s.size(), n.size())<<endl;
        return 0;
    }
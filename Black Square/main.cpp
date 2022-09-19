#include <iostream>

using namespace std;

int main(){
   int a,b,c,d;
   cin>>a>>b>>c>>d;

    string s;
    cin>>s;

    int res=0;

    for(int i=0; i<s.size(); i++){
        if(s[i] == '1') res+=a;
        else if(s[i] == '2') res+=b;
        else if(s[i] == '3') res+=c;
        else if(s[i] == '4') res+=d;

    }

    cout<<res;
    return 0;
}

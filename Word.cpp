#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int upper=0, lower=0;
    for(int i=0; i<s.size(); i++){
        if(int(s[i]) > 90) lower++;
        else upper++;
    }

    for(int i=0; i<s.size(); i++){
        if(lower>upper && int(s[i]) < 95){
            s[i] = char(int(s[i]) + 32);
        }else if(lower<upper && int(s[i]) > 95){
            s[i] = char(int(s[i]) - 32);
        }else if(lower == upper && int(s[i]) < 95){
            s[i] = char(int(s[i]) + 32);
        }
    }
    cout<<s;
    return 0;
}


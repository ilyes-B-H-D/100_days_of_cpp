#include <iostream>

using namespace std;

int main(){
    int arr[4];
    for(int i=0; i<4; i++){
        cin>>arr[i];
    }

    string s;
    cin>>s;
    cout<<s[1]<<endl;
    int res=0;
    int a;
    for(int i=1; i<=s.size(); i++){
        cout<<s[i]<<endl;
        cout<<arr[a];
        res+=arr[s[i]];  
        cout<<res<<endl;  
    }

    if(arr[s[i]] == '1') res+=1;
        else if(arr[s[i]] == '2') res+=2;
        else if(arr[s[i]] == '3') res+=3;
        else if(arr[s[i]] == '4') res+=4;

    cout<<res;
    return 0;
}
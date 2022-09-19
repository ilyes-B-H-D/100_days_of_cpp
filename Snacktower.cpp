#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int i=0;
    vector<int> wait;
    bool b=true;

    while(b == true){
        if(arr[i] == n)
        {
            cout<<n<<" ";
            if(!wait.empty()){
                sort(wait.begin(), wait.end() , greater<int>());
                n=wait.back()-1;
                for(int j=0; j<wait.size(); j++) {
                    cout<<wait[j]<<" ";
                    if (wait[j]==1) b=false;
                }
                wait.clear();
            }else n--;


        } 
        else 
            {
                wait.push_back(arr[i]);
                cout<<" here "<<arr[i]<<" "<<n;
                cout<<endl<<"_ ";
            }
        i++;
    } 
    return 0;
}
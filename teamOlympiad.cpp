#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> res,finalRes;
    bool check = true;
    int j;
    while(check == true){
        res.clear();
        int k=0;
        j=1;
        while(k<3){
            for (int i=0; i<n; i++){
                if(j==arr[i]) {
                    arr[i] = 0;
                    res.push_back(i+1);
                    j++;
                }
            }
            k++;
        }

        if(res.size()<3) break;

        for (int i=0; i<3; i++){
            finalRes.push_back(res[i]);
        }
    }

    if(finalRes.empty()) cout<<0;
    else{
        cout<<finalRes.size()/3<<endl;
        for(int i=0; i<finalRes.size(); i+=3){
            cout<<finalRes[i]<<" "<<finalRes[i+1]<<" "<<finalRes[i+2]<<endl;
        }

    }
    return 0;
}
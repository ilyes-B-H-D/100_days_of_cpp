#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    int i=0;
    int a, b, c, d;
    int res;

    while(n--){
        res=0;
        cin>>a>>b>>c>>d;
        int k = ((a/b) % (c/d));
        cout<<k<<endl;
        while(k != 0){
            res++;
            k = (a/b) % (c/d);
        }

        // if((a/b) == (c/d)) arr[i]=0;
        // else if(((a/b)*(c/d) == 0)) {
        //     arr[i]=1;
        // }
        // else arr[i]=5;
        cout<<res<<endl;
        arr.push_back(res);
    }

    for(int j=0; j<i ; j++)
    {
        cout<<"here "<< arr[i]<<endl;
    }

}

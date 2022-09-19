#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, target;
    cin>>n;
    target = n;
    bool exist[n];

    memset(exist, false , sizeof exist);

    for (int i=0; i<n; i++)
    {
        cin>>a;
        exist[a]=true;
        if(a==target){
            while(exist[a]){
                cout<<a<<" ";
                a--;
                target--;
            }
        }
        cout<<endl;
    }


    return 0;
}

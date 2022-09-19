#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<3)
    {
        for(int i=0; i<n; i++) cin>>i;
        cout<<0;
    }

    else
    {

        int a[n];
        int max,min;
        cin>>a[0];
        min=max=a[0];

        for(int i=1; i<n; i++)
        {
            cin>>a[i];
            if(a[i]>max) max=a[i];
            if (a[i]<min) min=a[i];
        }

        int res=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]<max && a[i]>min) res++;
        }

        cout<<res;

    }

    return 0;
}

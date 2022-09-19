#include <bits/stdc++.h>

using namespace std;

void bubbleSortPremium(int a[], int n)
{
    bool swapped=false;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if (a[j] == a[j+1]) a[j]=0;
            else if(a[j]>a[j+1])
            {
                swap(a[j], a[j+1]);
                swapped=true;
            }
        }
        if(swapped==false) break;
    }
}

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int a[n];
    for(int i=0; i<n; i++)
    {
        if(int(s[i])<95) a[i]=int(s[i])+32;
        else a[i]=int(s[i]);
    }

    int res=0;
    bubbleSortPremium(a,n);
    for(int i=0; i<n; i++)
    {
        if(a[i]!=0) res++;
    }
    if(res==26) cout<<"YES";
    else cout<<"NO";
    return 0;
}

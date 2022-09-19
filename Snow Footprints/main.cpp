#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int l;
    cin>>l;
    string s;
    cin>>s;

    int start, e;
//find the first one
    for(int i=0; i<l; ++i)
    {
        if(s[i] != '.')
        {
            start=i+1;
            break;
        }
    }
//find the last one
        for(int i=l; i>0;i--)
    {
        if(s[i] != '.')
        {
            e=i;
            break;
        }
    }

cout<<start<<e;
// if all are R
if(s[start] == 'R' && s[e] == 'R'){
    cout<<start<<" "<<e+1;
}

// if all are L
if(s[start] == 'L' && s[e] == 'L'){
    cout<<e+1<<" "<<start;
}

// if there are R and L
int Rs=0, Ls, Sl;
int i=start;
while(s[i]=='R'){
    i++;
    Rs++;
}

Sl=start+Rs;
Ls=e-Sl-2;

if(Rs<Ls){
        cout<<Rs<<" "<<Ls<<endl;
    start=e-Rs+1;
    e=Sl;
}
    cout<<Ls<<" "<<Rs<<endl;
    cout<<start<<" "<<e;

    return 0;
}

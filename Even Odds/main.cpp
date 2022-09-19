#include <bits/stdc++.h>

using namespace std;

int main(){
long long n,k;
cin>>n>>k;

//if n is even
if(n%2==0){
    //if k in the even part of the result (the result will been even)
	if(k>n/2) cout<<(k-(n/2))*2;
    //k in the first half part of the result
	else cout<<k*2-1;
}
//if n is odd
else{
    //k in the second half part of the solution
	if(k>n/2+1) cout<<(k-((n/2)+1))*2;
	else cout<<k*2-1;
}

return 0;
}

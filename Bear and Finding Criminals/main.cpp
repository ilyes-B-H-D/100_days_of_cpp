#include <iostream>

using namespace std;

int main()
{
    int n,a;
    cin>>n>>a;
    int arr[n];
    for(int i=0; i<n;i++) cin>>arr[i];

    int counter=0;
    int j=max(n-a,a);
    for(int i=0; i<j; i++){
        cout<<arr[i]<<endl;
        if((arr[a-i] + arr[a+i])==2) counter+=2;
        else if(a==j && arr[a-i]==1 && arr[a+i]!=0 && arr[a+i]!=1) counter++;
        else if(a<j &&  arr[a+i]==1 && arr[a-i]!=0 && arr[a-i]!=1 ) counter++;
    }
    if(arr[a]==1)counter++;
    cout<<counter;
    return 0;
}

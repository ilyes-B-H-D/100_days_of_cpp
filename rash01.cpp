#include <iostream>

using namespace std;

int main(){

    int arr[8];
    int m[4][4];
    for(int i=0; i<8; i++){
        cin>>arr[i];
    }

    int i=0, j=4;
    while(i<4){
        // in case of one of them 4
        if((arr[i]==4 && arr[j]==1) || (arr[i]==1 && arr[j]==4) ){
            for(int k=0; k<4; k++){
                m[k][i] = 0;
                m[k][i] = (k+1);
//                cout<<m[k][i]<<endl;
            }

        }
//        else cout<<0;

        // in case of one of them 3


        i++;j++;
    }

    for(int i=0; i<4; i++){
                cout<<endl;
        for(int j=0; j<4; j++){
            cout<<m[i][j]<<" ";
        }
//        cout<<endl;
    }
    return 0;
}

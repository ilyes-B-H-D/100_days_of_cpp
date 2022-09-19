#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string name;
    cin>>name;
    char last='a';
    int first, second, sum=0;

    for(int i=0; i<name.size(); i++){

        first = 26 - abs(int(last) - int(name[i]));
        second = abs(int(last) - int(name[i]));

        if(first<second) sum+=first;
        else sum+=second;

        last=name[i];
    }
    cout<<sum;
    return 0;
}




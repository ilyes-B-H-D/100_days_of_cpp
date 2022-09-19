#include <iostream>

using namespace std;

int main()
{
    int price, coin;
    cin>>price>>coin;
    int i=0;
    bool stop=false;
    while(!stop){
        i++;
        if(((price*i)) %10 == 0){
            stop=true;
            break;
        }else if(((price*i)-coin) %10 == 0){
           stop=true;
            break;
        }

    }
    cout<<i;
    return 0;
}

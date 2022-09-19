#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int s=bits.size();
        if((s+1)%3!=0)return false;
        else{
            for(int i=3; i<s;i+=3){
                if(bits[i]!=0) return false;
            }
        }
        return true;
    }
};

int main()
{
    vector<int> a {1,0,0};
    cout<<Solution.isOneBitCharacter(a);
    return 0;
}

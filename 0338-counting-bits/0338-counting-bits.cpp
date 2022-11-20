class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> v;
        
        for(int i=0;i<=n;i++){
            int x=i, count=0;
            while(x>0){
                int a=x%2;
                x/=2;
                if(a==1)
                    count++;
            }
            v.push_back(count);
        }
        return v;
    }
};
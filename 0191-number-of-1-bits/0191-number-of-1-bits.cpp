class Solution {
public:
    int hammingWeight(uint32_t n) {        
        int count=0;
        while(n>0){
            int a = n%2;
            n/=2;
            if(a==1)count++;
        }
        return count;
    }  
};
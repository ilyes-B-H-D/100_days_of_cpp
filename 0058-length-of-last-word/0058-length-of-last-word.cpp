class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=0;
        string a="",l="";
        while(i<s.size()){
            if(s[i]==' '){
                if(a.size()>0)
                    l=a;
                a="";
            }
            else{
               a+=s[i]; 
            }
            i++;
        }
        cout<<a<<l;
        
        return a.size()>0?a.size():l.size();
    }
};
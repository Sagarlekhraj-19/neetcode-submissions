class Solution {
public:
    bool isAnagram(string s, string t) {

        int n=s.size();
        int sum=0;
        int sum2=0;
        if(s.size()!=t.size()){
            return false;
        }

        for(int i=0; i<n; i++){
            sum2^=s[i];
            sum=sum^s[i]^t[i];

        }

        if(sum==0 && sum2==0){
            return false;
        }
        
        if(sum==0 && sum2!=0){
            return true;
        }

        return false;
        
    
        
    }
};

class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans = 0;
        for(char ch='A';ch<='Z';ch++){
            int i=0,j=0;
            int tmp = 0;
            while(j<s.size()){
                if(s[j]==ch){
                    j++;
                }
                else if(s[j]!=ch && tmp<k){
                    j++;
                    tmp++;
                }
                else{
                    if(s[i]==ch){
                        i++;
                    }
                    else if(s[i]!=ch){
                        tmp--;
                        i++;
                    }
                }
                ans = max(ans,j-i);
            }
        }
        
        return ans;   
    }
};

class Solution {
public:
    bool isPalindrome(string s) {
        string k = "";
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9'){
                k += s[i];
            }
        }
        transform(k.begin(),k.end(),k.begin(),::tolower);
        for(int i=0;i<k.size()/2;i++){
            if(k[i]!=k[k.size()-1-i]){
                return false;
            }
        }
        return true;
    }
};

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(int i=0;i<s1.size();i++){
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }
        if(freq1==freq2){
            return true;
        }
        int left = 0;
        for(int right=s1.size();right<s2.size();right++){
            freq2[s2[left]-'a']--;
            left++;
            freq2[s2[right]-'a']++;
            if(freq1==freq2){
                return true;
            }
        }
        return false;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> ch1(26),ch2(26);
        for(int i=0;i<s.size();i++){
            ch1[s[i] - 'a']++;
        }
        for(int i=0;i<t.size();i++){
            ch2[t[i] - 'a']++;
        }
        return ch1==ch2;
    }
};

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        deque<char>dq;
        map<char,int>mp1;
        map<char,int>mp2;
        for(auto u:s1){
            mp1[u]++;
        }
        for(int j=0;j<s2.size();j++){
            dq.push_back(s2[j]);
            if(dq.size()>=s1.size()){
                for(auto u:dq){
                    mp2[u]++;
                }
                if(mp1==mp2){
                    return true;
                }
                mp2.clear();
                dq.pop_front();
            }
        }
        return false;
    }
};

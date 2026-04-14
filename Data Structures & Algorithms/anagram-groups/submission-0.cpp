class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string,string>>p;
        for(int i=0;i<strs.size();i++){
            string k = strs[i];
            sort(k.begin(),k.end());
            p.push_back({k,strs[i]});
        }
        sort(p.begin(),p.end());
        for(auto u:p){
            cout<<u.first<<" "<<u.second<<endl;
        }
        vector<vector<string>> ans;
        vector<string>tmp1;
        vector<string>tmp2;
        for(int i=0;i<p.size();i++){
            if(tmp1.size()==0){
                tmp1.push_back(p[i].first);
                tmp2.push_back(p[i].second);
            }
            else if(tmp1.size() && tmp1.back()==p[i].first){
                tmp1.push_back(p[i].first);
                tmp2.push_back(p[i].second);
            }
            else{
                ans.push_back(tmp2);
                tmp1.clear();
                tmp2.clear();
                i--;
            }
        }
        ans.push_back(tmp2);
        return ans;
    }
};

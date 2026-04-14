class Solution {
public:

    string encode(vector<string>& strs) {
        string encod;
        for(int i=0;i<strs.size();i++){
            string k = to_string(strs[i].size());
            k += "#";
            encod += k;
            encod += strs[i];
        }
        for(auto u:encod){
            cout<<u;
        }cout<<endl;

        return encod;
    }

    vector<string> decode(string s) {
        vector<string>decod;
        int i=0;
        while(i<s.size()){
            string len;
            while(s[i]!='#'){
                len += s[i];
                i++;
            }
            i++;
            int size = stoi(len);
            decod.push_back(s.substr(i,size));
            i += size;
        }
        for(auto u:decod){
            cout<<u<<" ";
        }cout<<endl;

        return decod;
    }
};

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
        int i=0,j=0;
        while(i<s.size()){
            string k;
            string num;
            while(s[i]!='#'){
                num += s[i];
                i++;
            }
            int size = stoi(num);
            j = (size+i);
            for(int m=i+1;m<=j;m++){
                k.push_back(s[m]);
            }
            decod.push_back(k);
            i = j+1;
        }
        for(auto u:decod){
            cout<<u<<" ";
        }cout<<endl;

        return decod;
    }
};

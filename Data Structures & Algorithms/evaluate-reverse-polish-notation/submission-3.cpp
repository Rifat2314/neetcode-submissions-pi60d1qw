class Solution {
public:
    int evalRPN(vector<string>& token) {
        stack<int>st;
        int ans = 0;
        for(int i=0;i<token.size();i++){
            int tmp;
            if(token[i]=="+"){
                tmp = st.top();
                st.pop();
                ans = (tmp+st.top());
                st.pop();
                st.push(ans);
            }
            else if(token[i]=="-"){
                tmp = st.top();
                st.pop();
                ans = (st.top()-tmp);
                st.pop();
                st.push(ans);
            }
            else if(token[i]=="*"){
                tmp = st.top();
                st.pop();
                ans = (tmp*st.top());
                st.pop();
                st.push(ans);
            }
            else if(token[i]=="/"){
                tmp = st.top();
                st.pop();
                ans = (st.top()/tmp);
                st.pop();
                st.push(ans);
            }
            else{
                st.push(stoi(token[i]));
            }
        }
        //cout<<st.top()<<endl;
        return st.top();
    }
};

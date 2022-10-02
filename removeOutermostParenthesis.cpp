class Solution {
public:
    string removeOuterParentheses(string s) {
        
        string ans;char letter;stack<char> st;

        if(s.size()<=2){
            return ans;
        }
        for(int i=0;s[i]!='\0';i++){

            if(s[i]=='('){

                if(st.empty()){
                    st.push('(');
                }
                else{
                    st.push('(');
                    ans=ans+'(';
                }
            }
            else{

                char a=s[i];
                st.pop();
                if(!st.empty()){

                    ans=ans+s[i];
                }
            }
        }
        return ans;
    }
};
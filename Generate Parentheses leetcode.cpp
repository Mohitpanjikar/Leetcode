/*count of close should be less than count of open starting from 
open bracket go till the time open bracket == close bracket == n */

class Solution {
public:
vector<string>ans;
    void generate_Parenthesis(int open,int close,int n,string s){
        if(s.size()==2*n)
        ans.push_back(s);
        if(open<n)
        generate_Parenthesis(open+1,close,n,s+"(");
        if(close<open)
        generate_Parenthesis(open,close+1,n,s+")");
    }
    vector<string> generateParenthesis(int n) {
        generate_Parenthesis(0,0,n,"");
        return ans;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0 || n==1) return n;
        int c = 0;
        int ans = 0;
        unordered_map<char,int> mp;
        
        for(int i=0; i<n; i++)
        {
            c++;
            if(mp.find(s[i])!=mp.end())
            {
                int index = mp[s[i]];
                if(i-index+1 <= c) 
                {
                    c = i-index;
                    //mp[s[i]] = i;
                }
            } 
            mp[s[i]] = i;
            ans = max(ans,c);
        }
        return ans;
        
        
    }
};
class Solution {
public:
//recursive Method -
    int solve(vector<int>& cost,int n){
        //base case -
        if(n==0)    
        return cost[0];

        if(n==1)
        return cost[1];

        //processing -
        int ans = cost[n] + min(solve(cost,n-1),solve(cost,n-2));
        return ans;
    }
//second Method - Dynamic Programming -
    int solve2(vector<int>& cost,int n,vector<int>&dp){
        //base case -
        if(n==0)
        return cost[0];

        if(n==1)
        return cost[1];

        //step 3 -
        if(dp[n] != -1)
        return dp[n];

        //processing - step 2
        dp[n] = cost[n] + min(solve2(cost,n-1,dp),solve2(cost,n-2,dp));
        return dp[n];
    }
//Third Method - Tabulation Method , Bottom up approch -
    int solve3(vector<int>& cost,int n){
        //step 1 - creation of dp array -
        vector<int>dp(n+1);
        //step 2 - base case -
        dp[0] = cost[0];
        dp[1] = cost[1];

        //3rd step -
        for(int i=2;i<n;i++){
            dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
        }
    return min(dp[n-1],dp[n-2]);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        /* recursive method -
        int n = cost.size();
        int ans = min(solve(cost,n-1),solve(cost,n-2));
        return ans;
        */

        /*
        // using dynamic programming -
        int n = cost.size();
        //step 1 -
        vector<int> dp(n+1,-1);
        int ans = min(solve2(cost,n-1,dp),solve2(cost,n-2,dp));
        return ans;
        */

        int n = cost.size();
        int ans = solve3(cost,n);
        return ans;

    }
};
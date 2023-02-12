class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(),nums.end());
        if(nums[nums.size()-1]!=nums.size()) return nums.size();
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]-nums[i]!=1){
                ans = nums[i]+1;
            }
        }
        return ans;
    }
};
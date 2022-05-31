class Solution {
public:
    int dp[101];
    int rob(vector<int>& nums) {
        memset(dp,0,sizeof(dp));
        if(nums.size() == 1){
            return nums[0];
        }
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);
        for(int i=2;i<nums.size();i++){
            dp[i] = max(nums[i]+dp[i-2], dp[i-1]);
        }
        return dp[nums.size()-1];
        
    }
};
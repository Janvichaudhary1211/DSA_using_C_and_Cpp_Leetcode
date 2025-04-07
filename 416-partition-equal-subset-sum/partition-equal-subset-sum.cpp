class Solution {
public:
    bool solve(int idx, vector<int> &nums, int N, int target, vector<vector<int>> &dp){
         if(idx >= N || target < 0)
           return false;
        if(target == 0)
           return true;
        if(dp[idx][target] != -1)
           return dp[idx][target];
        bool incl = solve(idx+1, nums, N, target-nums[idx],dp);
        bool excl = solve(idx+1, nums, N, target,dp);
       dp[idx][target]= incl || excl;
       return dp[idx][target];
    }
    bool canPartition(vector<int>& nums) {
        int N=nums.size();
        int total=0;
        for(int i=0; i<N; i++){
            total+= nums[i];
        }
        if(total & 1)
           return false;
        int target=total/2;
        vector<vector<int>> dp(N,vector<int>(target+1,-1));
        return solve(0,nums,N,target,dp);
    }
};
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int cumulative_sum=0;
        for(int &i: nums){
            sum+= i;
        }
        for(int i=0; i<n; i++){
            int left_sum= cumulative_sum;
            int right_sum= sum-left_sum-nums[i];
            if(left_sum==right_sum){
                return i;
            }
            cumulative_sum+=nums[i];
        }
        return -1;
    }
};
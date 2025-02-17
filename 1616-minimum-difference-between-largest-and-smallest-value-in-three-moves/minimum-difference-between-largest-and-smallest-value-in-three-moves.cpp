class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        if(n<=4)
        return 0;
        partial_sort(begin(nums),begin(nums)+4,end(nums));
        nth_element(begin(nums)+4,begin(nums)+(n-4),end(nums));
        sort(begin(nums)+(n-4),end(nums));
        int result= INT_MAX;
        result=min(result,nums[n-4]-nums[0]);
        result=min(result,nums[n-3]-nums[1]);
        result=min(result,nums[n-2]-nums[2]);
        result=min(result,nums[n-1]-nums[3]);

        return result;
    }
};
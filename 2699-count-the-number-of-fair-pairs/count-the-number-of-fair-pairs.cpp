class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n= nums.size();
        long long result=0;
        sort(begin(nums), end(nums));
        for(int i=0; i<n; i++){
            int l = lower_bound(begin(nums)+i+1, end(nums),lower - nums[i])- begin(nums);
            int x= l-i-1;
            int u= upper_bound(begin(nums)+1+i, end(nums), upper - nums[i] )- begin(nums);
            int y = u-i-1;
            result += y-x;
        }
        return result;
    }
};
class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long result=0;
        long long max_i=0;
        long long maxDiff=0;
        int n=nums.size();
        for(int k=0; k<n; k++){
            result= max(result,maxDiff*nums[k]);
            maxDiff= max(maxDiff, max_i-nums[k]);
            max_i= max(max_i,(long long)nums[k]);
        }
        return result;
    }
};
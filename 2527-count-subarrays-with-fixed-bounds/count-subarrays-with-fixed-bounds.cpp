class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0;
        int n = nums.size();
        int minkIdx = -1;
        int maxkIdx = -1;
        int culpritIdx = -1;
        for(int i=0; i<n; i++){
            if(nums[i] > maxK || nums[i] < minK)
                culpritIdx = i;
            if(nums[i] == minK)
               minkIdx = i;
            if(nums[i] == maxK)
                maxkIdx = i;
            int smaller = min(minkIdx , maxkIdx);
            long long temp = smaller - culpritIdx;
            ans += (temp <= 0)? 0: temp;
        }
        return ans;
    }
};
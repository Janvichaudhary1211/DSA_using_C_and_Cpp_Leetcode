class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        int x=1;
        sort(begin(nums), end(nums));
        int target= nums[n/2];
        int result=0;
        for(int &num: nums){
            if((num%x) !=(target%x))
               return -1;
            result+= abs((target - num)/x);
        }
        return result;
    }
};
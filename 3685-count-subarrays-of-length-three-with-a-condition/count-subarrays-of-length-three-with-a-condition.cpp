class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int count = 0;
        for(int i=0; i+2 < nums.size(); ++i){
               int a = nums[i];
               int b = nums[i+1];
               int c = nums[i+2];
               if(2*(a+c) == b){
                count++;
               }
        }
        return count;
    }
};
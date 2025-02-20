class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
      int n=nums.size();
      int q= queries.size();
      int sum_even=0;
      for(auto &x: nums){
        if(x%2==0)
        sum_even+=x;
      }
      vector<int> result;
      for(int i=0 ; i<q; i++){
        int val= queries[i][0];
        int index= queries[i][1];
        if(nums[index]%2==0){
            sum_even-=nums[index];
        }
        nums[index]+=val;
        if(nums[index]%2==0){
            sum_even+=nums[index];
        }
        result.push_back(sum_even);
      }  
      return result;
    }
};
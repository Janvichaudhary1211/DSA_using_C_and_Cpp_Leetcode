class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map <int,int> mp;
        for(int i=0; i<n;i++)
        {
            int remaining_value= target-nums[i];
            if(mp.find(remaining_value)!=mp.end())
            return{mp[remaining_value],i};
            else
            mp[nums[i]]=i;
        }
       return{}; 
    }
};
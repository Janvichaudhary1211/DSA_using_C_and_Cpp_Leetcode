class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int n=nums.size();
        long long result=0;
        int countMax=0;
        int maxE=*max_element(begin(nums),end(nums));
        while(j<n)
        {
           if(nums[j]==maxE){
             countMax++;
           }
           while(countMax>=k){
            result += n-j;
           if(nums[i]==maxE)
              countMax--;
            i++;
           }
           j++;
        }
        return result;
    }
};
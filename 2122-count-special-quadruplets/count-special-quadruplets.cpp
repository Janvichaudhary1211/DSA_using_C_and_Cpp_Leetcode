class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        
        for(int i=0; i<=n-4; i++){
            for(int j=i+1; j<=n-3; j++){
                for(int k=j+1; k<=n-2; k++){
                    for(int l=k+1; l<=n-1; l++){
                        if(nums[i]+nums[j]+nums[k] == nums[l])
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
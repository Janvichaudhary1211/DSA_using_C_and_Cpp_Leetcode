class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n=nums.size();
        vector<int> MaxRight(n);
        MaxRight[n-1]=nums[n-1];
        for(int i=n-2; i>=0; i--){
            MaxRight[i]=max(MaxRight[i+1],nums[i]);
        }
        int ramp=0;
        int i=0; //Point nums
        int j=0; //point MaxRight
        while(j<n){
            while(i<j && nums[i]>MaxRight[j]){
                i++;
            }
            ramp=max(ramp,j-i);
            j++;
        }
        return ramp;
    }
};
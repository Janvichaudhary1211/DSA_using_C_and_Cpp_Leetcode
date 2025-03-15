class Solution {
public:
    int M=1e9+7;
    int numberOfGoodPartitions(vector<int>& nums) {
    int n=nums.size(); 
    unordered_map<int,int> Index;
    for(int i=0; i<n; i++){
        Index[nums[i]]=i;
    }
    int i=0; 
    int result=1;
    int j=0;
    j=max(j,Index[nums[0]]);
    while(i<n){
        if(i>j)
         result=(result*2)%M;
    j=max(j,Index[nums[i]]);
     i++;
    }
    return result;
    }
};
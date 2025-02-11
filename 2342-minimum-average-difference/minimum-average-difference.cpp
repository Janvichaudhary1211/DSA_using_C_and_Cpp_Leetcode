class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
       int n=nums.size();
       long long sum=0;
       for(int i=0; i<n; i++){
        sum+= nums[i];
       }
       long long left_sum=0;
       long long right_sum=0;
       int result= INT_MAX;
       int index=-1;
       for(int i=0; i<n; i++){
        left_sum += nums[i];
        right_sum = sum- left_sum;
        
        int n_left= i+1;
        int n_right=n-n_left;
        
        long long left_avg= left_sum / n_left;
        long long right_avg= (i==n-1)?0:right_sum/n_right;

        int difference = abs(left_avg - right_avg);
        if(difference < result){
            result=difference;
            index=i;
        }

       }
       return index;
    }
};
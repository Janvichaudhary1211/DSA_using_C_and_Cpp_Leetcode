class Solution {
public:
int Kadane_max(vector<int> & arr, int n){
        int max_sum = INT_MIN;
        int sum = 0;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
            max_sum = max(max_sum, sum);
            if(sum < 0)
               sum = 0;
        }
        return max_sum;
    }
    int Kadane_min(vector<int> & arr, int n){
        int min_sum = INT_MAX;
        int sum = 0;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
            min_sum = min(min_sum, sum);
            if(sum > 0)
              sum = 0;
        }
        return min_sum;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
       int n = nums.size();
       int sum = accumulate(begin(nums), end(nums) , 0);
       int min_sum = Kadane_min(nums , n);
       int max_sum = Kadane_max(nums , n);
       int cir_sum = sum - min_sum;
       if(max_sum > 0)
          return max(max_sum , cir_sum);
       return max_sum;
       
    }
};
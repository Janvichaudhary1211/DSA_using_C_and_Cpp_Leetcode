class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
        for(int k=0;k<=31;k++){
            int temp=1<<k;
            int count_ones=0;
            for(int &num:nums){
            if((num&temp)==0){
            }
            else
             count_ones++;
            }
            if(count_ones%3==1){
                result=result|temp;
            }
          
        }
          return result;
    }
};
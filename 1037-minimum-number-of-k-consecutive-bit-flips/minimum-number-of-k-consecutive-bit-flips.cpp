class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n=nums.size();
        int flips=0;
        int flipCountFromPastFori=0;
        deque<int> flipQue;
         for(int i=0; i<n; i++){
            if(i>=k){
                flipCountFromPastFori -=flipQue.front();
                flipQue.pop_front();
            }
            if(flipCountFromPastFori %2 ==nums[i]){
                if(i+k >n){
                    return -1;
                }
                flipCountFromPastFori++;
                flips++;
                flipQue.push_back(1);
            }else{
                flipQue.push_back(0);
            }
         }
         return flips;
    }
};
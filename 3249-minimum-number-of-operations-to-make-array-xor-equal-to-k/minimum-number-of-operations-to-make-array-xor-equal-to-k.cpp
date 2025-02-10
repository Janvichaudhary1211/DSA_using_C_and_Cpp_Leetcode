class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int total_XOR=0;
        for(int &num:nums)
        total_XOR=total_XOR^num;
        int difference= total_XOR^k;
        return __builtin_popcount(difference);
    }
};
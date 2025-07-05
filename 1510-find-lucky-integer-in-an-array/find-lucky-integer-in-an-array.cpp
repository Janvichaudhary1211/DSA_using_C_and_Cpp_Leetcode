class Solution {
public:
    int findLucky(vector<int>& arr) {
       unordered_map<int,int> f;
       for(int x: arr)
       f[x]++;
       int res = -1;
       for(const auto &[num , count] : f)
       if(num == count)
       res = max(res, num);
       return res; 
    }
};
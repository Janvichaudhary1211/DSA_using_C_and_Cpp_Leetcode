class Solution {
public:
    int numRabbits(vector<int>& answers) {
       unordered_map<int,int> mp;
       int total = 0;
       for(int & it: answers){
        mp[it]++;
       } 
       for(auto & it: mp){
        int x = it.first;
        int count  = it.second;
        int grpSize = x+1;
        int grp = ceil((double)count / grpSize);
          total +=  grp * grpSize;
       }
       return total;
    }
};
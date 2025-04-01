class Solution {
public:
    long long mostPoints(vector<vector<int>>& q) {
        int n=q.size();
        if(n==1)
          return q[0][0];
        vector<long long> t(200001,0);
        for(int i=n-1; i>=0; i--)
           t[i]=max(q[i][0]+ t[i+q[i][1]+1],t[i+1]);
        return t[0];
    }
};
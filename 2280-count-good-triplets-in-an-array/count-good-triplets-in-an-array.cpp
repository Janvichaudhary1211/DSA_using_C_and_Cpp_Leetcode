class FenwickTree{
    vector<int> bit;
    int size;
    public:
    FenwickTree(int n) : size(n){
        bit.resize(n+1);
    }
    void update(int i, int delta){
        i++;
        while(i<= size){
            bit[i] += delta;
            i+= i & -i;
        }
    }
    int query(int i){
        i++;
        int res=0;
        while(i>0){
            res+= bit[i];
            i-= i & -i;
        }
        return res;
    }

};
class Solution {
public:
    long long goodTriplets(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        vector<int> indexMap(n);
        for(int i=0; i<n; i++){
            indexMap[nums2[i]] = i;
        }
        vector<int> mapped(n);
        for(int i=0; i<n; ++i){
            mapped[i] = indexMap[nums1[i]];
        }
        FenwickTree leftTree(n), rightTree(n);
        vector<int> leftCount(n),rightCount(n);
        for(int i=0; i<n; ++i){
            leftCount[i] = leftTree.query(mapped[i] - 1);
            leftTree.update(mapped[i],1);
        }
        for(int i=n-1; i>=0; --i){
            rightCount[i] = rightTree.query(n-1) - rightTree.query(mapped[i]);
            rightTree.update(mapped[i], 1);
        }
        long long result=0;
        for(int i=0; i<n; i++){
            result+= (long long)leftCount[i] * rightCount[i];
           
        }
      return result;
    }
};
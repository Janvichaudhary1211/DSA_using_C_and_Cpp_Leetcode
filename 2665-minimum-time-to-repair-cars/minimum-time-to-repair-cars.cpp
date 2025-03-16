class Solution {
public:
    typedef long long ll;
    bool isPossible(vector<int>&ranks, ll mid, int cars){
        ll rep_cars= 0;
        for(int i=0; i<ranks.size(); i++){
            rep_cars +=sqrt(mid/ranks[i]);
        }
        return rep_cars>=cars;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        int n= ranks.size();
      ll l=1;
      int max= *max_element(begin(ranks),end(ranks));
      ll r = 1ll*cars*cars*max; 
      ll result=-1;
      while(l<=r){
        ll mid= l+(r-l)/2;
        if(isPossible(ranks,mid,cars)==true){
          result=mid;
          r= mid-1;

        }
        else
        l=mid+1;
      }
      return result;
    }
};
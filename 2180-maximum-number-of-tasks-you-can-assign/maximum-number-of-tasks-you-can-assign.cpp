class Solution {
public:
     bool check(vector<int>& tasks, vector<int>& workers, int pills, int strength, int mid){
        multiset<int> st(begin(workers), begin(workers)+mid);
        int pillsUsed = 0;
        for(int i=mid-1; i>=0; i--){
            int req = tasks[i];
           auto it = prev(st.end());
           if(*it >= req){
            st.erase(it);
           }else if(pillsUsed >= pills){
            return false;
           }else{
            // find weakest worker which can do the task using pill
            auto weakestWorker = st.lower_bound(req - strength);
            if(weakestWorker == st.end()){
                return false;
            }
            else{
                st.erase(weakestWorker);
                pillsUsed++;
            }
           }
        }
        return true;
     }
    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        int m= tasks.size();
        int n= workers.size();
        sort(begin(tasks) , end(tasks));
        sort(begin(workers), end(workers), greater<int>());
        int result = 0;
        int l =0;
        int r = min(m,n);
        while(l <= r){
            int mid = l+(r - l)/2;
            if(check(tasks, workers, pills, strength, mid)){
                result = mid;
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        return result;
    }
};
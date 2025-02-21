class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int, vector<int>> mp;
        vector<bool> visited(n, false);
        for(int i=0; i<n; i++){
            mp[arr[i]].push_back(i);
        }
        queue<int> que;
        que.push(0);
        visited[0]=true;
        int steps=0;
        while(! que.empty()){
            int size= que.size();
            while(size--){
                int curr_index=que.front();
                que.pop();
                int left= curr_index-1;
                int right= curr_index+1;
                if(curr_index==n-1)
                   return steps;
                if(left>=0 && !visited[left]){
                   que.push(left);
                   visited[left]=true;
                }
                if(right<=n-1 && !visited[right]){
                   que.push(right);
                   visited[right]=true;
                }
                for(int &idx: mp[arr[curr_index]]){
                    if(!visited[idx]){
                        que.push(idx);
                        visited[idx]=true;
                    }
                }
                mp.erase(arr[curr_index]);
            }
            steps++;
        }
        return -1;
    }
};
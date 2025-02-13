class Solution {
public:
int getPivot(vector<int>& arr,int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
        e=mid;
        }
        mid=s+(e-s)/2;
    }
    return e;
}
int Binary_Search(vector<int>& arr,int s,int e, int target){
    int start=s;
    int end=e;
    int mid= s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        int pivot = getPivot(nums,nums.size());
        if(nums[pivot]<=target && target<=nums[nums.size()-1]){
            return Binary_Search(nums,pivot,nums.size()-1,target);
        }
        else{
            return Binary_Search(nums,0,pivot-1,target);
        }
        
    }
};
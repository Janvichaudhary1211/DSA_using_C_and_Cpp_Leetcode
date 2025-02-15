class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int i=0,j=0,k=0;
      vector<int> temp(m+n);
        while(i<m && j<n && k<m+n){
            if(nums1[i]<=nums2[j]){
               temp[k++]=nums1[i++];
            }else{
                temp[k++]=nums2[j++];
            }
        }
        while(i<m && k<m+n){
            temp[k++]=nums1[i++];
        }
        while(j<n && k<m+n){
            temp[k++]=nums2[j++];
        }
        for(int i=0;i<m+n; i++){  
     nums1[i]=temp[i];
        }
    }
};
class Solution {
public:
    int find_digit_sum(int num){
        int sum = 0;
        while(num){
            sum += num%10;
            num /= 10;
        }
        return sum;
    }
    int countLargestGroup(int n) {
        unordered_map<int,int> mp;
      int count = 0;
      int maxSize = 0;
      for(int num=1; num<=n; num++){
        int digitSum = find_digit_sum(num);
          mp[digitSum]++;

          if( mp[digitSum] == maxSize)
             count++;
          else if(mp[digitSum] > maxSize){
            maxSize = mp[digitSum];
            count = 1;
          }
      } 
      return count; 
    }
};
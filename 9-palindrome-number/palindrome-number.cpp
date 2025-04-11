class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
          return false;
        string num = to_string(x);
       int i=0;
       int j=num.length()-1;
       while(i<=j){
        if(num[i]==num[j]){
            i++;
            j--;
        }else{
        return false;
        }
       }
       return true;
    }
};
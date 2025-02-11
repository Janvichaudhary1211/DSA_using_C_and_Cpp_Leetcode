class Solution {
public:
    int maximumSwap(int num) {
        string s= to_string(num);
        int n= s.length();
        vector<int> maxRight(10,-1);
        for(int i=0; i<n; i++){
            int index = s[i]-'0';
            maxRight[index]=i;
        }
        for(int i=0; i<n; i++){
            char current_char=s[i];
            int current_digit=current_char-'0';
            for(int digit=9; digit>current_digit; digit--){
                if(maxRight[digit]>i){
                    swap(s[i],s[maxRight[digit]]);
                    return stoi(s);
                }
            }
        }
        return num;
    }
};
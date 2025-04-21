class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        int curr = 0;
        int minimum = 0;
        int maximum = 0;
        for(int & d: differences){
            curr = curr + d;
            minimum = min(minimum , curr);
            maximum = max(maximum , curr);
            if( (upper - maximum) - (lower - minimum) + 1  <=0)
               return 0;
        }
        return (upper - maximum) - (lower - minimum) + 1;
    }
};
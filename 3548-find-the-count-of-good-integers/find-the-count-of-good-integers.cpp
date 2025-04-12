class Solution {
public:
    long long countGoodIntegers(int n, int k) {
        unordered_set<string> st;
        int m=(n+1)/2;
        long long result=0;
        int start = pow(10,m-1);
        int end = pow(10,m)-1;
        for(int num=start; num<=end; num++){
            string lefthalf= to_string(num);
            string full="";
            if(n%2==0){
                string righthalf = lefthalf;
                reverse(righthalf.begin(), righthalf.end());
                full = lefthalf + righthalf;
            }else{
                string righthalf = lefthalf.substr(0,m-1);
                reverse(righthalf.begin(), righthalf.end());
                full = lefthalf + righthalf;
            }
            long long number = stoll(full);
            if(number %k !=0)
               continue;
            sort(full.begin(),full.end());
            st.insert(full);
        }
        vector<long long> factorial(11,1);
        for(int i=1; i<11; i++){
            factorial[i] = factorial[i-1]*i;
        }
        for(const string &s: st){
            vector<int> count(10,0);
            for(const char &ch: s){
                count[ch-'0']++;
            }
            int totalDigits = s.length();
            int zeroDigits = count[0];
            int nonzeroDigit = totalDigits-zeroDigits;
            long long permutations = (nonzeroDigit * factorial[totalDigits - 1]);
            for(int i=0; i<10; i++){
                permutations /= factorial[count[i]];
            }
            result += permutations;
        }
        return result;
    }
};
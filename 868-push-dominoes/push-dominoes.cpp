class Solution {
public:
    string pushDominoes(string dominoes) {
        int n= dominoes.length();
        vector<int> leftClosetR(n);
        vector<int> rightClosetL(n);
        string result (n,' ');
        // moving left to right
        for(int i=0; i<n; i++){
            if(dominoes[i] == 'R'){
                leftClosetR[i] = i;
            }else if(dominoes[i] == '.'){
               leftClosetR[i] = i > 0 ? leftClosetR[i-1] : -1; 
            }else{
                leftClosetR[i] = -1;
            }
        }
        // moving right to left
        for(int i = n-1; i>=0; i--){
             if(dominoes[i] == 'L'){
                rightClosetL[i] = i;
            }else if(dominoes[i] == '.'){
               rightClosetL[i] = i < n-1 ? rightClosetL[i+1] : -1; 
            }else{
                rightClosetL[i] = -1;
            }
        }
        for(int i=0; i<n; i++){
            int distLeftR = abs( i - leftClosetR[i] );
            int distRightL = abs( i - rightClosetL[i] );
            if(leftClosetR[i] ==   rightClosetL[i]){
                result[i] = '.';
            }else if( rightClosetL[i] == -1){
                result[i] = 'R';
            }else if(leftClosetR[i] == -1){
                result[i] = 'L';
            }else if(distLeftR == distRightL){
                result[i] = '.';
            }else {
                result[i] = distRightL < distLeftR ? 'L' : 'R';
            }
        }
        return result;
    }
};
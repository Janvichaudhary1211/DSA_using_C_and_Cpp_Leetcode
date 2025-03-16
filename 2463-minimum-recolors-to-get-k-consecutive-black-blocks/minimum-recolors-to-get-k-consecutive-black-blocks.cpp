class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i=0;
        int j=0;
        int n=blocks.size();
        int recolors=k;
        int w=0;
        while(j<n){
            if(blocks[j]=='W')
              w++;
            if(j-i+1==k){
              recolors= min(recolors,w);
            if(blocks[i]=='W')
             w--;
             i++;
            }
            j++;
        }
        return recolors;
    }
};
class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        if (t.length() > n) {
            return "";
        }

        unordered_map<char, int> mp;
        for (char &ch : t) {
            mp[ch]++;
        }

        int req_count = t.length();  
        int i = 0, j = 0;
        int window_size = INT_MAX;
        int start = 0;

        while (j < n) {
            char ch = s[j];
            if (mp[ch] > 0) {
                req_count--;
            }
            mp[ch]--;  

            while (req_count == 0) {
                int curr_window_size = j - i + 1;
                if (curr_window_size < window_size) {
                    window_size = curr_window_size;
                    start = i;
                }
                mp[s[i]]++;  
                if (mp[s[i]] > 0) { 
                    req_count++;
                }
                i++;  
            }

            j++; 
        }
        return window_size == INT_MAX ? "" : s.substr(start, window_size);
    }
};

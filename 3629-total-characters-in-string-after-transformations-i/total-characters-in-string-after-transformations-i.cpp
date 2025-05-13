class Solution {
public:
    const int MOD = 1e9 + 7;
    int lengthAfterTransformations(string s, int t) {
        vector<long long> cnt(26, 0);
    for (char c : s) {
        cnt[c - 'a']++;
    }

    for (int step = 0; step < t; ++step) {
        vector<long long> next_cnt(26, 0);
        for (int i = 0; i < 26; ++i) {
            if (i == 25) {
                // 'z' → 'a' + 'b'
                next_cnt[0] = (next_cnt[0] + cnt[25]) % MOD;
                next_cnt[1] = (next_cnt[1] + cnt[25]) % MOD;
            } else {
                // 'a'-'y' → next letter
                next_cnt[i + 1] = (next_cnt[i + 1] + cnt[i]) % MOD;
            }
        }
        cnt = next_cnt;
    }

    long long result = 0;
    for (int i = 0; i < 26; ++i) {
        result = (result + cnt[i]) % MOD;
    }
    return result;
    }
};
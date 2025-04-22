class Solution {
public:
    const int MOD = 1e9 + 7;

    int idealArrays(int n, int maxValue) {
        int maxLen = 14; // Max chain length needed for constraints

        // Precompute factorials and inverse factorials for combinations
        vector<int> fact(n + 1, 1), invFact(n + 1, 1);
        for (int i = 1; i <= n; ++i) {
            fact[i] = 1LL * fact[i - 1] * i % MOD;
        }
        invFact[n] = modinv(fact[n]);
        for (int i = n - 1; i >= 0; --i) {
            invFact[i] = 1LL * invFact[i + 1] * (i + 1) % MOD;
        }

        // Helper to compute C(n, r)
        auto C = [&](int n, int r) -> int {
            if (r > n) return 0;
            return 1LL * fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
        };

        // dp[len][val] — number of multiplicative chains of length `len` ending in value `val`
        vector<int> dp(maxValue + 1, 1); // Base case: 1 sequence of length 1 for each value
        long long result = 0;

        for (int len = 1; len <= maxLen; ++len) {
            // For current chain length, count total sequences
            for (int i = 1; i <= maxValue; ++i) {
                result = (result + 1LL * dp[i] * C(n - 1, len - 1)) % MOD;
            }

            // Build next dp: for each i, add to all multiples of i
            vector<int> next(maxValue + 1, 0);
            for (int i = 1; i <= maxValue; ++i) {
                for (int j = i * 2; j <= maxValue; j += i) {
                    next[j] = (next[j] + dp[i]) % MOD;
                }
            }
            dp = next;
        }

        return result;
    }

    int modinv(int a) {
        return power(a, MOD - 2);
    }

    int power(int a, int b) {
        int res = 1;
        while (b > 0) {
            if (b % 2 == 1) res = 1LL * res * a % MOD;
            a = 1LL * a * a % MOD;
            b /= 2;
        }
        return res;
    }
};

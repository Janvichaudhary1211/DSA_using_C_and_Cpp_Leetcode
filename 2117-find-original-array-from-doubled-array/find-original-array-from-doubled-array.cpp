class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        if (n % 2 != 0) {
            return {};  // If the size is odd, return an empty vector
        }

        sort(begin(changed), end(changed));  // Sort the array
        map<int, int> mp;  // Map to store frequency of elements
        for (int &num : changed) {
            mp[num]++;
        }

        vector<int> ans;  // To store the original array
        for (int &num : changed) {
            if (mp[num] == 0) {
                continue;  // Skip if 'num' has already been used
            }

            int twice = num * 2;
            if (mp[twice] == 0) {
                return {};  // Return empty if we cannot find the double
            }

            ans.push_back(num);  // Add 'num' to the result
            mp[num]--;  // Decrease the count of 'num'
            mp[twice]--;  // Decrease the count of 'twice'
        }

        return ans;  // Return the final answer
    }
};

    
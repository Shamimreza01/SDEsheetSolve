class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int i = 0, j = 0;
        int maxans = 0;
        unordered_set<int> set;
        while (j < str.size()) {
            if (set.find(str[j]) != set.end()) // if duplicate element is found
            {
                while (i < j && set.find(str[j]) != set.end()) {
                    set.erase(str[i]);
                    i++;
                }
            }

            set.insert(str[j]);
            maxans = max(maxans, j - i + 1);
            j++;
        }
        return maxans;
    }
};
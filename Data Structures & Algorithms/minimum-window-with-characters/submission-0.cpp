class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> stg1;
        unordered_map<char, int> stg2;

        int left = 0;
        int have = 0;
        int need;
        int result = INT_MAX;
        int start = 0;

        for (int i = 0; i < t.size(); i++) {
            stg2[t[i]]++;
        }

        need = stg2.size();

        for (int right = 0; right < s.size(); right++) {
            stg1[s[right]]++;

            if (stg2.find(s[right]) != stg2.end() &&
                stg1[s[right]] == stg2[s[right]]) {
                have++;
            }

            while (have == need) {

                if (right - left + 1 < result) {
                    result = right - left + 1;
                    start = left;
                }

                stg1[s[left]]--;

                if (stg2.find(s[left]) != stg2.end() &&
                    stg1[s[left]] < stg2[s[left]]) {
                    have--;
                }

                left++;
            }
        }

        if (result == INT_MAX) {
            return "";
        }

        return s.substr(start, result);
    }
};
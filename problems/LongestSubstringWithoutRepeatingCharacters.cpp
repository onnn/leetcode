class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        int strLength = s.length();
        for (int i = 0; i <= strLength; i++) {
            for (int j = 0; j <= strLength; j++) {
                string iterateThroughSubstrings = s.substr(i, j - 1);
                int subLength = iterateThroughSubstrings.length();
                if (!HasRepeatingCharacters(iterateThroughSubstrings, subLength) && subLength >= 1 && subLength >= longest) {
                        longest = subLength;
                }
            }
        }
        return longest;
    }
    
    bool HasRepeatingCharacters(string str, int len) {
        set<int> charSet;
        pair<set<int>::iterator,bool> ret;
        
        if (len < 2) {
            return false;
        }
        for (int i = 0; i < len; i++) {
            ret = charSet.insert(str[i]);
            if (ret.second == false) {
                return true;
            }
        }
        return false;

    }
};
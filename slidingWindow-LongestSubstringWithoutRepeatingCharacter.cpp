class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left =0;
        int right =0;
        int n = s.length();
        unordered_set<char> st;
        int maxLen = 0;
        while(right<n){
            char ch = s[right];
            if(st.find(ch) != st.end()){
                while(left<right && st.find(ch) != st.end()){
                    st.erase(s[left]);
                    left++;
                }
            }
            st.insert(ch);
            maxLen = max(maxLen, right-left+1);
            right++;
        }
        return maxLen;
    }
};
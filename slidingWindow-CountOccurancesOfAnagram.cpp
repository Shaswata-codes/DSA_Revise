class Solution {
public:
    int search(string pat, string txt) {
        unordered_map<char, int> mp;
        
        for (char ch : pat) {
            mp[ch]++;
        }
        
        int k = pat.length();
        int count = mp.size();
        int i = 0, j = 0;
        int ans = 0;
        
        while (j < txt.length()) {
            if (mp.find(txt[j]) != mp.end()) {
                mp[txt[j]]--;
                
                if (mp[txt[j]] == 0) {
                    count--;
                }
            }
            
            if (j - i + 1 < k) {
                j++;
            }
            else if (j - i + 1 == k) {
                if (count == 0) {
                    ans++;
                }
                
                if (mp.find(txt[i]) != mp.end()) {
                    if (mp[txt[i]] == 0) {
                        count++;
                    }
                    mp[txt[i]]++;
                }
                
                i++;
                j++;
            }
        }
        
        return ans;
    }
};
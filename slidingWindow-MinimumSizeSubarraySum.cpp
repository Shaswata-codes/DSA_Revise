class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size(); 
        int left =0;
        int right =0;
        int s=0;
        int minLen = INT_MAX;
        int len =0;
        while(right<n){
            s+=nums[right];
            if(s>=target){
                len = right-left+1;
                minLen = min(minLen, len);
                while(s>=target){
                    s-=nums[left];
                    left ++;
                    if(s>=target){
                        len = right-left+1;
                        minLen = min(minLen,len);
                    }
                }
            }
            right++;
        }
        return minLen == INT_MAX ? 0 : minLen;
    }
};
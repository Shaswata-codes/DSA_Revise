class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int z = 0;
        int o =  0;
        int t = 0;
        for(int i = 0 ; i<n ; i++){
            if (nums[i] == 0) z++ ;
            if (nums[i] == 1) o++ ;
            if (nums[i] == 2) t++ ;   
        }
        for(int i=0;i<n;i++){
            if (i<z) nums[i]=0;
            if (i>=z && i<z+o) nums[i]=1;
            if (i>=z+o && i<n) nums[i]=2;
        }
    }
};
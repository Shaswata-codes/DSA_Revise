#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum =0;
        int n = nums.size();
        int idx=0;
        while(idx<n && idx<k){
            sum += nums[idx];
            idx++;
        }
        int maxSum = sum;
        for (int i=1; i< n - k + 1; i++){
            sum = sum - nums[i-1] + nums[i+k-1];
            maxSum =  max(sum, maxSum);
        }
        return (double)maxSum/k;
    }
};
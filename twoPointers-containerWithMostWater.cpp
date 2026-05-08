class Solution {
public:
    int maxArea(vector<int>& height) {
        int leftPointer = 0;
        int rightPointer = height.size() - 1;
        int maxWater = 0;
        
        while (leftPointer < rightPointer) {
            int width = rightPointer - leftPointer;
            int h = min(height[leftPointer], height[rightPointer]);
            int currWater = width * h;

            maxWater = max(maxWater, currWater);

            if (height[leftPointer] < height[rightPointer]) 
                leftPointer++;
            else 
                rightPointer--;
        }
        return maxWater;
    }
};

class Solution {
public:
   vector<int> searchRange(vector<int>& nums, int target) {
        int start = findStartingPosition(nums, target);
        int end = findEndingPosition(nums, target);
        return {start, end};
    }
    
    int findStartingPosition(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int start = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] >= target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
            
            if (nums[mid] == target) {
                start = mid;
            }
        }
        
        return start;
    }
    
    int findEndingPosition(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int end = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
            
            if (nums[mid] == target) {
                end = mid;
            }
        }
        
        return end;
    }
};
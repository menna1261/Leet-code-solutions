class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2){
            return nums.size();
        }
        int index = 2; // we're starting from the 3rd position because the first 2 are always valid

        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] != nums[index - 2]) {   // we need to make sure that the next valid element  isn't duplicated more than twice
            nums[index++] = nums[i];

        }
    }
    return index;
    }
};

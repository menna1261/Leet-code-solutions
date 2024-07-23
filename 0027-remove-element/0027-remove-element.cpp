class Solution {
public:
int removeElement(vector<int>& nums, int val) {
    int size = nums.size();
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] == val) {
            nums[i] = -1; 
            counter++;
        }
    }
    int k = size - counter;
    sort(nums.begin(), nums.end(), greater<int>());


    return k;
}

};
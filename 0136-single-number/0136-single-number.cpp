class Solution {
public:
int singleNumber(vector<int>& nums) {
	int positive[30000] = { 0 };
	int negative[30000] = { 0 };
//	int first = *min_element(nums.begin(), nums.end());
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] > 0) {
			positive[nums[i]]++;
		}
		else if (nums[i] < 0) {
			negative[abs(nums[i])]++;
		}
	}
	for (int i =0; i < 30000; i++) {
		if (positive[i] == 1) {
			return i;
		}
		else if (negative[i] == 1) {
			return -i;
		}
	}
    return 0;
}
};
class Solution {
public:
    int climbStairs(int n) {
	int arr[n+1] ;
	int t1 = 0, t2 = 1, next;
	int count = 0;
	while (count < n) {
		next = t1 + t2;
		arr[++count] = next;
		t1 = t2;
		t2 = next;
	}
	return arr[n];

}
};
class Solution {
public:
   bool isPalindrome(int x) {
    if (abs(x) != x)
        return false;
    vector<int>v;
    //   int i =0;
    while (x) {
        v.push_back(x % 10);
        x /= 10;
    }
    for (int i = 0, j = (v.size() - 1); j > 0, i < v.size(); i++, j--) {
        if (v[i] != v[j])
            return false;
    }
    return true;
}
};
class Solution {
public:
    
  bool is_alphanumeric(char x) {
        return (x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z') || (x >= '0' && x <= '9');
    }
    
    char to_lowercase(char x) {
        if (x >= 'A' && x <= 'Z') {
            return x + 32;
        }
        return x;
    }
    
    bool isPalindrome(string s) {
        string filtered_str = "";
        
        for (char c : s) {
            if (is_alphanumeric(c)) {
                filtered_str += to_lowercase(c);
            }
        }
        
        int n = filtered_str.size();
        for (int i = 0; i < n / 2; i++) {
            if (filtered_str[i] != filtered_str[n - i - 1]) {
                return false;
            }
        }
        
        return true;
    }
};
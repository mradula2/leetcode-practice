class Solution {
public:
    bool isPalindrome(string s) {
        
        for (char &c : s) {
            c = tolower(c);
        }

        int start = 0;
        int end = s.length() - 1;

        while (start < end ) {
            while (!isalnum(s[start]) && start < end) {
                start++;
            }

            while (!isalnum(s[end]) && start < end) {
                end--;
            }

            if (s[start] != s[end])
                return false;
            else {
                start++;
                end--;
            }

        }
        return true;
    }
};
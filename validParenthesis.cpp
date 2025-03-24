#include <stack>
#include <unordered_map>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        std::unordered_map<char, char> brackets = {
            {'(', ')'},
            {'{', '}'},
            {'[', ']'}
        };

        std::stack<char> open_brackets;

        for(char c : s) {
            if(brackets.count(c)){
                open_brackets.push(c);
            } 
            else {
                if (!open_brackets.empty() && c == brackets[open_brackets.top()]) {
                    open_brackets.pop();
                } else {
                    return false;
                }
            }
        }

        return open_brackets.empty();
    }
};
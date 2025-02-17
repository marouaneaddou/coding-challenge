
# include <iostream>
# include <stack>
# include <string>

using namespace std;

class Solution {
    public:
        bool isValid(string s) {
            std::stack<char> stk;
    
            for ( int i = 0; i < s.size(); i++ ) {
                if ( s[i] == '{' || s[i] == '[' || s[i] == '(' ) {
                    stk.push(s[i]);
                }
                else if ( stk.size() != 0 && (stk.top() == '{' && s[i] == '}' || 
                    stk.top() == '(' && s[i] == ')' ||
                    stk.top() == '[' && s[i] == ']' ) ) stk.pop();
                else return false;
            }
            return stk.empty();
        }
};

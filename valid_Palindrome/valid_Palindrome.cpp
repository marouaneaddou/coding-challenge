
# include <iostream>
# include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

        std::string newStr;

        for ( int i = 0 ; i < s.size(); i++ ) {
            s[i] = tolower( s[i] );
            if ( isalpha( s[i] ) || (s[i] >= '0' && s[i] <= '9' )) newStr.push_back(s[i]);
        }
        
        for ( int i = 0, j = newStr.size() - 1 ; i <= j; i++, j-- ) {
            if ( newStr[i] != newStr[j] ) return false;
        }

        return true;
    }
};
int main() {}
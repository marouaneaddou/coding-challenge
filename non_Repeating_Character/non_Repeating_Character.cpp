

# include <iostream>
# include <string>
# include <unordered_map>

using namespace std;

class Solution {
    public:
      // Function to find the first non-repeating character in a string.
      static char nonRepeatingChar(string &s) {
          std::unordered_map<char, int> freq;
          for ( int i = 0; i <s.size(); i++ ) freq[s[i]]++;
          for ( int i = 0; i < s.size(); i++ ) {
              if ( freq[s[i]] == 1 ) return s[i];
          }
          return '$';
          // Your code here
      }
  };

int main() {
    {
        std::string str = "hello";
        std::cout << Solution::nonRepeatingChar(str) << std::endl;
    }
    {
        std::string str = "geeksforgeeks";
        std::cout << Solution::nonRepeatingChar(str) << std::endl;
    }
    {
        std::string str = "racecar";
        std::cout << Solution::nonRepeatingChar(str) << std::endl;
    }
    {
        std::string str = "aabbccc";
        std::cout << Solution::nonRepeatingChar(str) << std::endl;
    }
}
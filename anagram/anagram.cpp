
# include <iostream>
# include <string>
# include <unordered_map>
using namespace std;

class Solution {
    public:
      // Function is to check whether two strings are anagram of each other or not.
      static bool areAnagrams(string& s1, string& s2) {
          if ( s1.size() != s2.size() ) return false;
          std::unordered_map<int, int> freq;
          
          for ( int i = 0; i < s1.size(); i++ ) {
              freq[s1[i]]++;
          }
          for ( int i = 0; i < s2.size(); i++ ) {
              if ( freq[s2[i]] == 0 ) return false;
              freq[s2[i]]--;
          }
          return true;
      }
  };

int main() {
    {
        std::string s1 = "geeks";
        std::string s2 = "kseeg";
        std::cout << Solution::areAnagrams( s1, s2 ) << std::endl;
    }
    {
        std::string s1 = "allergy";
        std::string s2 = "allergic";
        std::cout << Solution::areAnagrams( s1, s2 ) << std::endl;
    }
    {
        std::string s1 = "g";
        std::string s2 = "g";
        std::cout << Solution::areAnagrams( s1, s2 ) << std::endl;
    }
}
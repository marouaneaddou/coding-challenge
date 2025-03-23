



# include <iostream>
# include <string>

using namespace std;


class Solution {
    public:
      bool sentencePalindrome(string &s) {
          std::string news;
          for ( int i = 0; i < s.size(); i++ ) {
              if ( s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9') {
                  news.push_back( tolower(s[i]) );
              }
          }
          // std::cout << news << std::endl;
          for ( int i = 0, j = news.size() - 1; i <= j; i++, j-- ) {
              if ( news[i] != news[j] ) return false;
          }
          return true;
          // code here
      }
  };

int main() {
    
}
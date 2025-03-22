
# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

class Solution {
    public:
      bool matSearch(vector<vector<int>> &mat, int x) {
          for ( int i = 0; i < mat.size(); i++ ) {
              if ( find( mat[i].begin(), mat[i].end(), x ) != mat[i].end() ) return true;
          }
          return false;
          // your code here
      }
  };
int main() {
    
}
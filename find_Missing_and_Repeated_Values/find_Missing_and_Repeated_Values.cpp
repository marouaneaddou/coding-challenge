
# include <iostream>
# include <vector>
# include <map>

using namespace std;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        std::map<int, int> freq;
        std::vector<int> ans(2);
        for ( int i = 0; i < grid.size(); i++ ) {
            for ( int j = 0; j < grid[i].size(); j++ ) {
                if ( freq[grid[i][j]] == 1 ) ans[0] = grid[i][j];
                freq[grid[i][j]]++;
            }
        }
        int i = 1;
        for ( auto item : freq) {
            if ( item.first != i) {
                ans[1] = i;
                break;
            }
            i++;
        }
        if ( ans[1] == 0 ) ans[1] = i;
        return ans;
    }
};

int main() {}
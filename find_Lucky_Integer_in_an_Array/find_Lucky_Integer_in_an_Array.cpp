
# include <iostream>
# include <vector>
# include <unordered_map>

using namespace std;

class Solution {
    public:
        int findLucky(vector<int>& arr) {
    
            std::unordered_map<int, int> freq;
    
            for ( int i = 0; i < arr.size(); i++ ) {
                freq[ arr[i] ]++;
            }
    
            int ans = -1;
    
            for ( auto it :  freq) {
                if ( it.first == it.second && ans < it.first ) ans = it.first;
            }
            
            return ans;
        }
};

int main() {

}
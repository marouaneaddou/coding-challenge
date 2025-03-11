

# include <iostream>
# include <vector>
# include <unordered_map>

using namespace std;

class Solution {
    public:
        static bool divideArray(vector<int>& nums) {
            std::unordered_map<int, int> freq;
    
            for ( int i = 0; i < nums.size(); i++ ) {
                freq[nums[i]]++;
            }
            for ( auto pair: freq ) {
                if ( pair.second & 1 != 0 ) return false; 
            }
            return true;
        }
    };

int main() {
    std::vector<int> nums = {1,1, 2};
    std::cout << Solution::divideArray( nums ) ;
}
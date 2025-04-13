
# include <iostream>
# include <vector>
# include <unordered_map>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nb;
        for ( int i = 0; i < nums.size(); i++ ) {
            int diff = target - nums[i];
            auto it = nb.find(diff);
            if ( it != nb.end() ) return { it->second, i };
            nb.insert({nums[i], i});
        }
        return {};
    }
};
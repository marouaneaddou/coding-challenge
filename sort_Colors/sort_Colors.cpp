
# include <iostream>
# include <vector>
# include <map>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        std::map<int, int> freq;
        for ( int i = 0; i < nums.size(); i++ ) 
            freq[nums[i]]++;
        int i = 0;
        for ( auto key : freq ) {
            for ( int j = 0; j < key.second; j++ ) nums[i++] = key.first;
        }
    }
};

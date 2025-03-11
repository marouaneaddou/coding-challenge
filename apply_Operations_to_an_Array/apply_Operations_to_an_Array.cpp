
# include <iostream>
# include <vector>

using namespace std;

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {

        for ( int i = 1; i < nums.size(); i++ ) {
            if ( nums[i] == nums[i - 1] ) {
                nums[i - 1] *= 2;
                nums[i] = 0;
            }
        }

        int j = 0;

        for (int i = 0 ; i < nums.size(); i++ ) {
            if ( nums[j] != 0 ) {
                j++;
                continue;
            }
            if ( nums[i] != 0 ) {
                nums[j++] = nums[i];
                nums[i] = 0;
            }
        }

        return nums;
    }
};

int main() {}
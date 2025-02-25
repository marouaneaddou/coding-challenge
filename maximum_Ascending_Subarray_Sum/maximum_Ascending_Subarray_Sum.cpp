

# include <iostream>
# include <vector>

using namespace std;


class Solution {
    public:
        int maxAscendingSum(vector<int>& nums) {
            int mx = nums[0];
            int sum = nums[0];
            for ( int i = 1; i < nums.size(); i++) {
                if ( nums[i] > nums[i - 1] ) {
                    sum += nums[i];
                }
                else {
                   sum = nums[i]; 
                }
                mx = max( sum , mx);
            }
            return mx;
        }
};

int main() {}
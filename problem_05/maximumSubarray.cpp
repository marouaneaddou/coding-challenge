


# include <iostream>
# include <vector>

using namespace std;

class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int largetSum = nums[0];
            int sum = 0;
            for ( int i = 0 ; i < nums.size(); i++) {
                sum += nums[i];
                if ( sum <= 0 ){
                    if ( sum > largetSum ) 
                        largetSum = sum;
                    sum = 0;
                }
                else if ( sum > largetSum ) {
                    largetSum = sum;
                }
            }
            return largetSum;
        }
};

int main() {
    
}
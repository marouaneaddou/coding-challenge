

# include <iostream>
# include <vector>

using namespace std;

class Solution {
public:
    std::vector<int> ans;
    int search( vector<int>& nums, int target, char c ) {
        int start = 0, end = nums.size() - 1, mid;
        int pos = -1;
        for ( ;start <= end; ) {
            mid = (start + end) / 2;
            if ( nums[mid] == target ) {
                pos = mid;
                if ( c == 'l' ) end = mid - 1;
                else start = mid + 1;
            }
            else if ( nums[mid] > target ) end = mid - 1;
            else start = mid + 1;
        }
        return pos;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int start = search( nums, target , 'l');
        if ( start == -1 ) return { -1, -1 };
        
        int end = search( nums, target , 'r');
        if ( start != -1 && end == -1 ) return { start, start };

        return {start, end};
    }
};

int main() {

}
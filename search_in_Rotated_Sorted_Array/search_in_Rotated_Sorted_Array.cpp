
# include <iostream>
# include <vector>

using namespace std;


class Solution {
public:
    int findPivot( std::vector<int>& nums ) {
        int start = 0, end = nums.size() - 1;
        int mid;
        for ( ;start <= end; ) {
            mid = ( start + end ) / 2;
            if ( nums[mid] > nums[mid + 1] ) return  mid + 1;
            else if ( nums[mid] < nums[mid - 1] ) return mid;
            if ( nums[mid] > nums[start] ) start = mid + 1;
            else if ( nums[mid] < nums[end] ) end = mid - 1; 
        } 
        return -1;
    }

    int binarySearch( int start , int end, std::vector<int>& nums, int target ) {
        int mid = (end - start) / 2;

        for ( ; start <= end ; ) {
            mid = (end + start) / 2;
            if ( nums[mid] == target ) return mid;
            else if ( nums[mid] > target ) end = mid - 1;
            else start = mid + 1;
        } 
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivot = 0;
        int size = nums.size() - 1;
        if ( nums[0] > nums[size] )
            pivot = findPivot( nums );
        int x = binarySearch(0,  pivot  , nums, target);
        int y = binarySearch(pivot , nums.size() - 1, nums, target);
        return max(x , y);
    }
};

int main() {
    
}
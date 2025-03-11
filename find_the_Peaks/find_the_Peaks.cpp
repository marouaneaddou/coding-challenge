

# include <iostream>
# include <vector>

using namespace std;


class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        std::vector<int> ans;
        for ( int i = 1; i + 1 < mountain.size(); i++ ) {
            if ( mountain[i] > mountain[i - 1] && mountain[i] > mountain[i + 1]) ans.push_back( i );
        }
        return ans;
    }
};

void printPeaks( std::vector<int> &peaks ) {
    for ( int i = 0; i < peaks.size(); i++ ) {
        std::cout << peaks[i] << " ";
    }
    std::cout << std::endl;
}

//  __TEST__
//  [ 1,3,2 ] -> 1
//  [ 1 ] -> empty
//  [ 1, 2 ] -> empty
//  [ 1, 2, 4 , 5 ] -> empty
//  [ 1, 2, 4 , 3 , 5 ] -> 2

int main() {
    Solution peaks;
    std::vector<int> element = {1, 2, 4 , 3 , 5};
    std::vector<int> ans = peaks.findPeaks(element);
    printPeaks( ans );
}
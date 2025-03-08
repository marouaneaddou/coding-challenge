
# include <iostream>
# include <string>

using namespace std;

class Solution {
public:
    static int minimumRecolors(string blocks, int k) {
        int j = k , mn = k, cont = 0;
        cont = count( blocks.begin(), blocks.begin() + k, 'B' );
        for ( int i = 0; j - 1 < blocks.size(); j++ ) {
            mn = min( mn, k - cont  );
            if ( blocks[i] == 'B' ) cont--;
            if ( blocks[j] == 'B' ) cont++;
            i++;
        } 
        return mn;
    }
};

int main() {
    std::cout << Solution::minimumRecolors("WWBBBWBBBBBWWBWWWB", 16) << std::endl;
    std::cout << Solution::minimumRecolors("WBWBBBW", 2) << std::endl;
    std::cout << Solution::minimumRecolors("WBB", 1) << std::endl;
    std::cout << Solution::minimumRecolors("BWWWBB", 6) << std::endl;
    std::cout << Solution::minimumRecolors("WBWW", 6) << std::endl;
    std::cout << Solution::minimumRecolors("WBBWWBBWBW", 6) << std::endl;
}
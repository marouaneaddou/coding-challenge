
# include <iostream>
# include <vector>

using namespace std;

class Solution {
    public:
      static void reverseArray(vector<int> &arr) {
          for ( int i = 0, j = arr.size() - 1; i < j ; i++, j-- ) {
              arr[i] = arr[i] ^ arr[j];
              arr[j] = arr[i] ^ arr[j];
              arr[i] = arr[i] ^ arr[j];
          }
      }
  };

  void print(vector<int> &arr) {
    for ( int i = 0; i < arr.size(); i++ ) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
  }
int main() {
    std::vector<int> arr = {1,2,3,4};
    Solution::reverseArray(arr);
    print( arr );
}
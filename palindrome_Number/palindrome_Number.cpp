
# include <iostream>

class Solution {
public:
    bool isPalindrome(int x)
    {
        int y = x;
        if (x < 0)
            return false;
        else 
        {
            long nb = 0;
            for (; x != 0;)
            {
                nb = nb * 10 + (x % 10);
                x /= 10;
            }
            return (y == nb);
        }
    }
};

int main() {
    
}
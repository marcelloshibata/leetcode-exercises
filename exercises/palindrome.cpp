#include <iostream>
#include <string>
using namespace std;

class Solution {
    public:
        bool isPalindrome(int x) {
            int reversed = 0;
            int original = x;

            while (x > 0) {
                reversed = (reversed * 10) + (x % 10);
                x /= 10;
            }

            return reversed == x;
};

int main() {
    Solution solution;
    std::cout << solution.isPalindrome(121);
}
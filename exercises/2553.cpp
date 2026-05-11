#include <vector>
#include <iostream>

using namespace std;

class Solution {
    public:
        vector<int> separateDigits(vector<int>& nums) {
            vector<int> result;

            for (int num : nums) {
                vector<int> digits;

                while (num > 0) {
                    digits.push_back(num % 10);
                    num /= 10;
                }

                for (int i = digits.size() - 1; i >= 0; i--) {
                    result.push_back(digits[i]);
                }
            }

            return result;
        }
};

int main() {
    Solution solution;

    vector<int> nums = { 13, 25, 83, 77 };
    vector<int> result = solution.separateDigits(nums);

    for (int digit : result) {
        cout << digit << " ";
    }
    cout << endl;

    return 0;
}
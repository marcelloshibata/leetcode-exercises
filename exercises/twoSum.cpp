#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int sum = 0;

		for (int i = 0; i < nums.size(); i++) {
			for (int c = i + 1; c < nums.size(); c++) {
				if (nums[i] + nums[c] == target) {
					return vector<int>{i, c};
				}
			}
		}
		return vector<int>{};
	}
};

int main() {
	Solution solution;

	std::vector<int> nums = { 3, 2, 4 };
	int target = 6;

	std::vector<int> result = solution.twoSum(nums, target);
	for (int i : result) {
		std::cout << i << " ";
	}
	std::cout << std::endl;

	return 0;
}
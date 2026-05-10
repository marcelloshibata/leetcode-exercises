#include <iostream>
#include <string>
using namespace std;

int main() {
	class Solution {
	public:
		int romanToInt(string s) {
			int sum = 0;

			for (int i = 0; i < s.size(); i++) {
				switch (s[i]) {
				case 'I':
					sum += 1;
					if (s[i + 1] == 'V') {
						sum += 3;
						i++;
					} else if (s[i + 1] == 'X') {
						sum += 8;
						i++;
					}
					break;
				case 'V':
					sum += 5;
					break;
				case 'X':
					sum += 10;
					if (s[i + 1] == 'L') {
						sum += 30;
						i++;
					}
					else if (s[i + 1] == 'C') {
						sum += 80;
						i++;
					}
					break;
				case 'L':
					sum += 50;
					break;
				case 'C':
					sum += 100;
					if (s[i + 1] == 'D') {
						sum += 300;
						i++;
					}
					else if (s[i + 1] == 'M') {
						sum += 800;
						i++;
					}
					break;
				case 'D':
					sum += 500;
					break;
				case 'M':
					sum += 1000;
					break;
				default:
					std::cout << "Invalid character." << std::endl;
				}
			}
			
			return sum;
		}
	};
}
#include <iostream>

int main() {
	std::string j, s;
	std::cin >> j >> s;
	
	int result = 0;
	for (const char ch : s) {
		result += j.find(ch) != std::string::npos;
	}
	
	std::cout << result;
	
	return 0;
}

#include <string>
#include <iostream>

void generate(int n, int left, int right, std::string st) {
	if (st.length() == 2 * n) {
		std::cout << st << std::endl;
		return;
	}
	if (left < n)
		generate(n, left + 1, right, st + "(");
	if (right < left)
		generate(n, left, right + 1, st + ")");
}

int main() {
	int n;
	int left = 0, right = 0;
	std::cin >> n;
	std::string st;
	generate(n, left, right, st);
}

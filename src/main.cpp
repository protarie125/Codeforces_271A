#include <iostream>
#include <tuple>

using namespace std;

tuple<int, int, int, int> getDigit(int y) {
	const auto& a = y % 10;
	const auto& b = (y / 10) % 10;
	const auto& c = (y / 100) % 10;
	const auto& d = y / 1000;

	return { a, b, c, d };
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int y;
	cin >> y;

	for (int i = 1; y < 10000; ++i) {
		y += 1;
		const auto& [a, b, c, d] = getDigit(y);

		if (a != b && a != c && a != d &&
			b != c && b != d && c != d) {
			cout << y;
			return 0;
		}
	}

	return 0;
}

#include "stdafx.h"

int main()
{
	srand(time(NULL));
	std::vector<int> x(20);
	std::for_each(x.begin(), x.end(), [](int & a) {
		a = rand() % 10;
		std::cout << a << '\t';
	});
	std::cout << std::endl;
	std::cout << *std::min_element(x.begin(), x.end()) << '\t';
	std::cout << *std::max_element(x.begin(), x.end()) << '\t';
	std::sort(x.begin(), x.end(), std::greater<int>());
	std::sort(x.begin(), x.end(), std::less<int>());
	int n = 4;
	std::for_each(x.begin(), x.end(), [n](int & a) { a += n; });
	std::for_each(x.begin(), x.end(), [n](int & a) { a -= n; });
	auto it = x.begin();
	while (it != x.end()) {
	auto y = std::find(it, x.end(), 1);
	if (y != x.end()) {
	x.erase(y);
	it++;
	}
	}
	x.erase(std::remove(x.begin(), x.end(), 4), x.end());
	std::cout << "after 4 is removed: " << std::endl;
	std::for_each(x.begin(), x.end(), [](int & a) {
		std::cout << a << '\t';
	});
	std::cout << std::endl;
	return 0;
}
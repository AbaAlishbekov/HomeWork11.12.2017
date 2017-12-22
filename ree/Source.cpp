#include "stdafx.h"









int main() {
	srand(time(NULL));
	std::vector<int> x(100);

	std::for_each(x.begin(), x.end(), [](int & a) {a = rand(); std::cout << a << std::endl; });
	
	
	std::cout << *std::min_element(x.begin(), x.end());
	std::cout << *std::max_element(x.begin(), x.end());
	std::sort(x.begin(), x.end(), std::greater<int>());
	std::sort(x.begin(), x.end(),std::less<int>());
	int n = 10;
	std::for_each(x.begin(), x.end(), [n](int & a) {a += n; });
	std::for_each(x.begin(), x.end(), [n](int & a) {a -= n; });
	auto it = x.begin();
	while (it !=x.end())
	{
		auto y = std::find(it, x.end(), 1);
		if (it != x.end())
		{
			x.erase(y);
			it++;
		}
	}
	x.erase(x.begin() + n);
	
	system("pause");
	return 0;
}
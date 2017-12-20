#include "stdafx.h"

void vector() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	std::vector<int> x(arr, arr + 10);

	auto it = x.begin();

	for (; it != x.begin(); ++it)
	{
		std::cout << *it << '\t';

	}

	std::cout << std::endl;
}

int main() {

	

	std::map<std::string, int> dictionary;
	dictionary.emplace(std::make_pair < std::string, int>("345", 1));
	auto it2 = dictionary.begin();
	for (; it2 != dictionary.end();++it2)
	{
		std::cout << it2->first << '\t' << it2->second << '\t';
	}
	std::cout << std::endl;
	system("pause");
}
#include "stdafx.h"
class A {
public:
	A() {
		std::cout << "A()" << std::endl;
	}
	~A() {
		std::cout << "~A()" << std::endl;
	}
	int value;
	friend std::ostream & operator<<(std::ostream &, const A &);
	friend void operator >> (std::istream & stream, const A & a);
};
std::ostream & operator<<(std::ostream & stream, const A & a)
{
	return stream << a.value;
}
void operator >> (std::istream & stream, const A & a) {
	stream >> a;
}
void write_to_file() {
	A a;
	a.value = 6;
	std::ofstream fout("file.txt");
	fout << a;
	fout.close();
}
void string_features() {
	std::string s = "abc", x = "123";
	s += "asdasd";
	std::swap(s, x);
	std::reverse(s.begin(), s.end());
	std::cout << s << '\t' << x << std::endl;
}
void auto_ptr() {
	std::auto_ptr<A> a(new A());
	a->value = 5;
	std::auto_ptr<A> b = a;
	std::cout << b->value << '\t' << std::endl;
}
void shared_ptr() {
	std::shared_ptr<int> x(new int(5));
	std::cout << x.use_count();
	std::shared_ptr<int> y = x;
	std::cout << x.use_count();
}
void unique_ptr() {
	std::unique_ptr<int> x(new int(5));
}
void use_count(std::shared_ptr<int> & x) {
	std::cout << x.use_count();
}
void uniqueness() {
	std::string x;
	std::getline(std::cin, x);
	std::set<char> y;
	for (size_t i = 0; i < x.length(); ++i)
	{
		if (y.find(x[i]) != y.end())
		{
			std::cout << "not unique" << std::endl;
			return;
		}
		else
		{
			y.insert(x[i]);
		}
	}
	std::cout << "unique" << std::endl;
}
bool compare(int x, int y) {

	return x < y;
}
void vector() {
	int arr[10] = { 8,9,6,3,4,6,7,1,2 };
	std::vector<int> x(arr, arr + 10);
	std::sort(x.begin(), x.end(), [](int x, int y) {return x < y; });
	auto it = x.begin();

	for (; it != x.begin(); ++it)
	{
		std::cout << *it << '\t';

	}

	std::cout << std::endl;
}
void list() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	std::list<int> y(arr, arr + 10);
	y.sort();
	//std::sort(y.begin(), y.end());
	std::list<int>::iterator it1 = y.begin();
	for (; it1 != y.end(); ++it1) { std::cout << *it1 << '\t'; };
	std::cout << std::endl;
}
void map() {
	std::map<std::string, int> dictionary;
	dictionary.emplace(std::make_pair < std::string, int>("345", 1));
	std::cout << dictionary.at("123") << std::endl;
	auto it2 = dictionary.begin();
	for (; it2 != dictionary.end(); ++it2)
	{
		std::cout << it2->first << '\t' << it2->second << '\t';
	}
	std::cout << std::endl;
}
int main() {



	vector();
	

	system("pause");
}
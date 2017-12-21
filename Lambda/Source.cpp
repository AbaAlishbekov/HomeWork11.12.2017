#include"stdafx.h"
using namespace std;

class A {
public:
	A() {
		std::cout << "A()" << std::endl;
	}
	A(int x) : value(x) {}
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
void operator>>(std::istream & stream, const A & a) {
	stream >> a;
}
class Finder {
public:
	Finder(int y) : x(y) {}
	int x;
	bool operator()(const A & a) {
		return x == a.value;
	}
};
int main() 
{
	vector<A> x = { A(1),A(3),A(4),A(5),A(6),A(2) };
	for_each(x.begin(), x.end(), [](A a) {cout << a.value << '\t'; });
	cout << " " << endl;
	int y;
	cin >> y;

	Finder f(y);
	
	auto a = find_if(x.begin(), x.end(), f);
	if (a != x.end())
	{
		cout << "this your's odd value" << "\t" << *a << '\n';
	}
	else
	{
		cout << "ERROR 404 NOT FOUND" << endl;
	}
	//auto a =  find_if(x.begin(), x.end(), [y](A &a) {return a.value == y; });
	
	system("pause");
	return 0;
}
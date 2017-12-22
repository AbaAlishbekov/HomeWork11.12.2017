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

void Find() {
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
}

void Permutation() {
	string a;
	string b;


	cin >> a;
	cin >> b;

	if (std::is_permutation(a.begin(), a.end(), b.begin()))
	{
		cout << "Nice" << endl;
	}
	else
	{
		cout << "Error" << endl;
	}

}

int main() 
{
	string a;
	cin >> a;
	
	bool arr[256] = { false };

	for (int i = 0; i < a.length(); i++)
	{
		int temp = (int)(a[i] - 48);
		if (arr[temp])
		{
			cout << "not unique";
			return 0;
		}
		arr[temp] = true;
	}


	system("pause");
	return 0;
}
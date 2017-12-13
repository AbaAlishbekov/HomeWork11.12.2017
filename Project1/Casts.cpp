#include "stdafx.h"

using namespace std;

class A {
public:
	A(){}
	virtual ~A()
	{

	}
};
class B :public A {};


void f1() {
	A a;
	B b;
	int x = 5;



	cout << typeid(a).before(typeid(b)) << endl;
	cout << typeid(x).name() << endl;
	cout << typeid(a).name() << endl;

}

class Temp {
	int x;
public:
	int getx() const {
		return x;
	}
	void setX(int x) const   {
		const_cast<Temp *>(this)->x = x;
	}




};

int main() {
	//A *a = new B();
	//B *b = dynamic_cast<B *>(new A());

	//int y = 5;
	//double x = static_cast<double>(y);
	////type name = static_cast<type>(var);
	//const double q = 5.5; 

	//double *w = const_cast<double *>(&q);
	//cout << *w << "  AMG" <<  endl;
	unsigned p = 5;
	unsigned *u = &p;
	int *i;
	i = reinterpret_cast<int *>(u);

	cout << *i << endl;
	//double *e = reinterpret_cast<double *>(123);

	//B *b = reinterpret_cast<B *>(&a);




	//delete w;
	////delete e;
	//delete a;
	//delete b;

	system("pause");
	return 0;
}
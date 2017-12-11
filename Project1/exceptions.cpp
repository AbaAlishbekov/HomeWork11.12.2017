#include "stdafx.h"
using namespace std;


class MyException : public exception {

	
	

};

float divide(float a, float b) {
	if (b == 0)
	{
		throw MyException();
	}
	else
	{
		return a/b;
	}
}

void main() {
	try {
		divide(2, 0);
	}
	catch (MyException e) {
		cout << e.what() << endl;
	}


	system("pause");
}
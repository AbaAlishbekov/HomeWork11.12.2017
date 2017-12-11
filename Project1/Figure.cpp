//#include "stdafx.h"
//
//using namespace std;
//
//class Figure {
//public:
//	Figure(){}
//	 virtual ~Figure(){}
//
//	virtual float getArea() = 0;
//};
//
//
//class Rectangle : public Figure {
//	float width, height;
//
//public:
//	Rectangle(float width, float height)  {
//		this->width = width;
//		this->height = height;
//	}
//	~Rectangle(){}
//
//
//	float getArea() override {
//		return width * height;
//	}
//
//};
//
//class Circle : public Figure {
//public:
//	float radius;
//
//
//	Circle(float radius) {
//
//		this->radius = radius;
//
//	}
//	~Circle()
//	{
//
//	}
//	float getArea() override {return radius * radius * 3.14;}
//
//};
//
//
//void main() {
//	//Массив ссылок на указатели абстрактного класса
//	Figure **arr = new Figure*[2];
//	//присваивание объектов разных классов
//	arr[0] = new Circle(2);
//	arr[1] = new Rectangle(3, 2);
//	for (int i = 0; i < 2; i++)
//	{
//		cout << arr[i]->getArea() << endl;
//		delete arr[i];
//
//	}
//	delete[] arr;
//
//	system("pause");
//}
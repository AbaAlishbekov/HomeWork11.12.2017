//#include "stdafx.h"
//
////class Singleton {
////public:
////	static Singleton & getInstance() 
////	{
////		static Singleton instance;
////		return instance;
////
////	}
////private:
////	
////		Singleton(){}
////		Singleton & operator=(const Singleton &) = delete;
////		Singleton(const Singleton &) = delete;
////
////
////};
////
////
////int main() {
////	Singleton& x = Singleton::getInstance();
////
////	return 0;
////}
//class Observer;
//class Subject;
//
//
//class Subject {
//public:
//	double currency;
//	std::vector<Observer *> observers;
//	void add(Observer * observer) {
//		observers.push_back(observer);
//	}
//	void remove(int id) {
//		observers.erase(observers.begin() + id);
//	}
//	void notify() {
//		for (auto x:observers)
//		{
//			x->update();
//		}
//	}
//};
//class Observer {
//	double currency;
//	Subject * subject;
//public:
//	void update() {
//		this->currency = subject->currency;
//	}
//};
//
//int main() {
//
//	return 0;
//}
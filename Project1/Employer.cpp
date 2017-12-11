//#include "stdafx.h"
//
//using namespace std;
//
//
//class Employer
//{
//public:
//	Employer() {};
//	~Employer()
//	{
//
//	}
//	virtual void Print() = 0;
//
//};
//
//
//class President : Employer {
//public:
//	string *name;
//	string *level;
//	
//	President(string name, string level){
//	
//		this->name = new string (name);
//		this->level = new string(level);
//
//	}
//
//
//
//	void Print() {
//
//		cout << "Name : \t" << *name << endl << "Level : \t" << *level << endl;
//	}
//
//	~President()
//	{
//		delete name;
//		delete level;
//	}
//
//	
//
//};
//
//class Manager : Employer {
//public:
//	string *name;
//	string *level;
//
//	Manager(string name, string level){
//
//		this->name = new string(name);
//		this->level = new string(level);
//
//	}
//
//
//
//	void Print() {
//
//		cout << "Name : \t" << *name << endl << "Level : \t" << *level << endl;
//	}
//
//	~Manager()
//	{
//		delete name;
//		delete level;
//	}
//
//
//
//
//};
//
//class Worker : Employer {
//public:
//	string *name;
//	string *level;
//
//	Worker(string name, string level) {
//
//		this->name = new string(name);
//		this->level = new string(level);
//
//	}
//
//
//
//	void Print() {
//
//		cout << "Name : \t" << *name << endl << "Level : \t" << *level << endl;
//	}
//
//	~Worker()
//	{
//		delete name;
//		delete level;
//	}
//
//
//};
//
//
//
//void main() {
//
//	Manager A("Dimas", "just worker");
//	Worker B("Radja", "Slave");
//	President C("Abay", "GOD");
//
//	A.Print();
//	B.Print();
//	C.Print();
//
//
//
//
//	system("pause");
//}
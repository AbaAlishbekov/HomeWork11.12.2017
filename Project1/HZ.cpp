//#include <iostream>
//#include <cereal/archives/xml.hpp>
//#include <cereal/types/vector.hpp>
//#include <fstream>
//using namespace std;
//
//void f1() {
//	cereal::XMLOutputArchive archive(std::cout);
//	bool arr[] = { true, false };
//	std::vector<int> vec = { 1, 2, 3, 4, 5 };
//	archive(CEREAL_NVP(vec),
//		arr);
//
//
//}
//
//
//int main()
//{
//		ofstream o("file.txt");
//	
//		string s;
//	
//		while (getline(cin, s)) {
//			if (s!="exit")
//			{
//				o << s;
//	
//			}
//			else
//			{
//				break;	
//			}
//		}
//		
//		
//		
//		
//		
//		
//		
//		
//		o.close();
//	
//	system("pause");
//}
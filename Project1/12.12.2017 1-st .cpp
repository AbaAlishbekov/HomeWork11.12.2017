//#include "stdafx.h"
//using namespace std;
//
//
//
//
//int convert(string s) {
//
//	if (s.length() > 31)
//	{
//		throw exception();
//	}
//
//	int res = 0, radix = 1;
//	for (int i = s.length() - 1; i>= 0; --i)
//	{
//		res += radix * ((int)s[i] - 48);
//		radix *= 10;
//	}
//	return res;
//}
//
//int main() {
//
//
//
//	try
//	{
//		convert("1234567891234567891234567891234");
//	}
//	catch (exception e)
//	{
//		cout << "Eeeeee slishkov mnogo!!!!!" << endl;
//	}
//
//
//	/*string a = "128";
//	cout << convert(a) << endl;
//	int x = stoi(a);
//	cout << x << endl;*/
//	system("pause");
//	return 0;
//
//
//
//}
//
//
//
//
//
//
//
//
//
//
////void main() {
////
////
////		string s = "Abay";
////		long int sum = 0;
////
////		for (int i = 0; i < s.length(); i++)
////		{
////			sum += (int(s[i]) - 48);
////		}
////
////		cout << sum << endl;
////		
////
////	system("pause");
////}
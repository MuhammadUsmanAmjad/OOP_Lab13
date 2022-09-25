//#include<iostream>
//#include"header.h"
//using namespace std;
//shape* create_square(string S_name, int value) {
//	return new square(S_name, value);
//}
//rectangle* create_rectangle(string S_name, int len, int wid) {
//	return new rectangle(S_name, len, wid);
//}
//void getinfo(shape obj)
//{
//	obj.print();
//}
//int main()
//{
//	shape obj1("Circle");
//	square obj2("Quadliteral", 8);
//	getinfo(obj1);
//	getinfo(obj2);
//	return 0;
//
//	/*shape name is : Circle
//		shape name is : Circle
//		~shape() called*/
//
//	/*shape name is : Quadliteral
//		Area is : 16*/
//
//
//	/*invalid casting.
//	it returns null ptr because it has base class object which is explicit casting so 
//	we cannot access it so it return NULL
//	pointer in the VTable of derived pointer*/
//
//	/*shape name is : Circle
//		~shape() called
//		shape name is : Quadliteral
//		~shape() called
//		~sqaure() called
//		~shape() called
//		~shape() called*/
//
//}
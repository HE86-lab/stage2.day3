#include<iostream>
using namespace std;
#include<string>


//函数提高
//在cpp中，函数的形参列表中形参是可以有默认值的
//返回值类型 函数名  （参数=默认值）{}

//int func(int a,int b=20,int c=30)
//{
//	return  a + b + c;
//}



//注意事项
//1.如果某个位置已经有了默认参数，那么这个位置后，从左往右都必须有默认值
// int  func2(int  a , int b=10) {
//	return a + b;
//}
//
////2.函数声明有默认参数，函数实现就不能有默认参数
//int func3(int a = 10, int b = 20);
//int func3(int a, int b) {
//	return a + b;
//}
//int main() {
//
//	//cout << func(10, 20, 30) << endl;//如果自己传入了数据，就用自己的数据，如果没有就用默认值
//	cout << func2(10) <<  endl;
//
//
//
//
//
//	system("pause");
//	return 0;
//}


//函数站位参数
//函数形参列表里可以有占位参数，用来占位，调用函数时必须填补该位置
//占位参数还可以有默认参数
//void func(int a, int) {
//	cout << "this  is func" << endl;
//}
//
//int main() {
//
//	func(220,20);
//	system("pause"); 
//	return 0;
//}


//函数重载
//函数名可以相同，提高复用性


//条件
//1.同一个作用域
//2.函数名称相同
//3.函数参数类型不同或者个数或者顺序不同
//void func() {
//	cout << "func调用" << endl;
//}
//void func(int a) {
//	cout << "func调用int  a   "<<a << endl;
//}
//
//void func(double a) {
//	cout << "func调用int  a   " << a << endl;
//}
//
//void func(double a, int b) {
//	cout << "a+b" << a + b << endl;
//}
//void func(int b, double a) {
//	cout << "a+b+a" << a + b+ a << endl;
//}
////函数的返回值不可以作为函数重载的条件
////int func(int b, double a) {
////	cout << "a+b+a" << a + b + a << endl;
////	return  0;
////}
//
//int main() {
//	func();
//	func(10);
//	func(3.2);
//	func(10.0, 2);
//	func(10, 8.0);
//	system("pause");
//	return 0;
//}



////函数重载注意事项
////1.引用作为重载的条件
//void func(int& a) {//int&=10不合法
//	cout << "func的int&a复用" << endl;
//}
//void func(const int& a) {//const int&a=10;
//	cout << "func的const int& a复用" << endl;
//}
////2.函数重载碰到默认参数
//void func2(int a,int b=10) {//函数重载碰到默认参数，出现二义性，报错,尽量避免这种情况
//	cout << "int a, int  b=10复用" << endl;
//
//}
//void func2(int a) {
//	cout << "int a复用" << endl;
//
//}
//int main() {
//	/*int a = 10;
//	func(a);*/
//	//func(10);
//	//func2(10);
//
//	system("pause");
//	return  0;
//}




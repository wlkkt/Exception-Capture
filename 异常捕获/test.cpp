//#include<iostream>
//using namespace std;
//
//double Division(int a, int b)
//{
//	// 当b == 0时抛出异常
//	if (b == 0)
//		throw "Division by zero condition!";
//	else
//		return ((double)a / (double)b);//否则返回a / b后的结果
//}
//
//
//void fxx()
//{
//	int i = 0;
//	cin >> i;
//	if (i % 2 == 0)//出现偶数时抛异常
//	{
//		throw 1;
//	}
//}
//
//void Func()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << Division(a, b) << endl;
//	try
//	{
//		fxx();//可能出异常的代码
//	}
//	catch (int x)
//	{
//		cout <<__LINE__<<"捕获异常:" << x << endl;
//	}
//
//	cout << "=====================" << endl;
//
//}
//
//int main()
//{
//
//	try 
//	{
//		Func();
//	}
//	catch (const char* errmsg)
//	{
//		cout << errmsg << endl;
//	}
//	catch (int x)
//	{
//		cout << __LINE__ <<"捕获异常:"<< x << endl;
//	}
//
//	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
//
//	return 0;
//}

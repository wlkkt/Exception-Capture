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


#include<iostream>
using namespace std;
double Division(int a, int b)
{
	// 当b == 0时抛出异常
	if (b == 0)
		throw "Division by zero condition!";
	else
		return ((double)a / (double)b);
}


void fxx()
{
	int i = 0;
	cin >> i;
	if (i % 2 == 0)
	{
		string s("出现偶数");
		throw s;
		//throw 10;
	}

	cout << "会不会执行我呢？" << endl;
}

void Func()
{
	int len, time;
	cin >> len >> time;
	cout << Division(len, time) << endl;
	fxx();
}

int main()
{
	try
	{
		Func();
	}
	catch (const char* errmsg)
	{
		cout << errmsg << endl;
	}
	catch (const string& err)
	{
		cout << err << endl;
	}
	catch (...) // 任意类型的异常
	{
		cout << "未知异常" << endl;
	}
	
	cout << "到这里了" << endl;
	return 0;
}


#include "widget.h"
#include <QApplication>
int main(int argc, char* argv[])
{
	QApplication a(argc, argv); //定义并创建应用程序
	Widget w; //定义并创建窗口
	w.show(); //显示窗口
	return a.exec(); //应用程序运行
}
//#include<iostream>
//using namespace std;
//
//double Division(int a, int b)
//{
//	// ��b == 0ʱ�׳��쳣
//	if (b == 0)
//		throw "Division by zero condition!";
//	else
//		return ((double)a / (double)b);//���򷵻�a / b��Ľ��
//}
//
//
//void fxx()
//{
//	int i = 0;
//	cin >> i;
//	if (i % 2 == 0)//����ż��ʱ���쳣
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
//		fxx();//���ܳ��쳣�Ĵ���
//	}
//	catch (int x)
//	{
//		cout <<__LINE__<<"�����쳣:" << x << endl;
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
//		cout << __LINE__ <<"�����쳣:"<< x << endl;
//	}
//
//	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
//
//	return 0;
//}
